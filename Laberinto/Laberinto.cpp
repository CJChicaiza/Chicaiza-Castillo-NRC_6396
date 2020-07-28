/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
* AUTOR: Chicaiza Jaya Cristopher Jennsy                          *
* VERSION DEL PROGRAMA: 1.0                                       *
******************************************************************/
#include <cstdlib>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <windows.h>
#include <fstream>
#define FIL 20
#define COL 50
using namespace std;
int destinox, puntox, puntoy;
class Laberinto
{
public:
    /**
        @brief Esta funcion crea el laberinto para la opcion Generar
        @param void
        @return void
 */
    void  EmpezarGen ()
    {
        srand(unsigned(time(NULL)));
        Inicializar();
        int x=1+rand()%FIL-2;
        GenerarCamino(x, 1);
        lab[x][1]='I';
        GenerarParedes();
        FinGenerar();
        Imprimir();
        ImprimirA();
        system("PAUSE");
        system("cls");
    }
    /**
        @brief Esta funcion crea laberinto para la opcion jugar
        @param void
        @return void
 */
    void  EmpezarJug ()
    {
        srand(unsigned(time(NULL)));
        Inicializar();
        int x=1+rand()%FIL-2;
        GenerarCamino(x, 1);
        lab[x][1]='I';
        GenerarParedes();
        FinGenerar();
        Imprimir();
        int tecla;
        puntox=x;
        puntoy=1;
        while(true)
        {
            tecla=getch();
            if(tecla==27) break;
            else
            {

                mover(tecla);
                if(lab[puntox][puntoy+1]=='F')
                {
                    cout<<"Felicidades! Usted termino de resolver el laberinto :)"<<endl;
                    break;
                }

            }

        }

        system("pause");
    }
    /**
        @brief Inicializa  la matriz laberinto
        @param void
        @return void
    */
    void Inicializar()
    {
        for(int i=0; i<FIL; i++)
        {
            for(int j=0; j<COL; j++)
            {
                if(i==0 || j==0 || i==FIL-1 || j==COL-1) lab[i][j]='0';
                else lab[i][j]=' ';
            }
        }
    }
    /**
        @brief Imprime el laberinto
        @param void
        @return void
    */
    void Imprimir()
    {
        for(int i=0; i<FIL; i++)
        {
            for(int j=0; j<COL; j++)
            {
                if(lab[i][j]=='0')cout<<(char)177;
                else cout<<lab[i][j];
            }
            cout<<endl;
        }
    }
    /**
        @brief Manda el laberinto a un archivo
        @param void
        @return void
 */
    void ImprimirA()
    {
        ofstream archivo("Laberinto.txt");
        for(int i=0; i<FIL; i++)
        {
            for(int j=0; j<COL; j++)
            {
                if(lab[i][j]=='0')archivo<<1;
                else if (lab[i][j]=='I')archivo<<2;
                else if (lab[i][j]=='F')archivo<<3;
                else if (lab[i][j]==' ')archivo<<0;
            }
            archivo<<endl;
        }
        archivo.close();
    }

    /**
        @brief Algoritmo que genera el camino
        @param void
        @return i es filas, j es columnas
 */
    void GenerarCamino(int i, int j)
    {
        while(j!=COL-2)
        {
            int a=rand()%3;
            switch(a)
            {
            case 0:
                if(i+1!=FIL-1 && lab[i+1][j]!='O')
                {
                    i++;
                    lab[i][j]='O';
                }
                break;
            case 1:
                if(i-1!=0 && lab[i-1][j]!='O')
                {
                    i--;
                    lab[i][j]='O';
                }
                break;
            case 2:
                if(j+1!=COL-1 && lab[i][j+1]!='O')
                {
                    j++;
                    lab[i][j]='O';
                    if(j==COL-2) lab[i][j]='F';
                }
                break;


            }
        }
    }
    /**
        @brief Dibuja el laberinto
        @param void
        @return void
 */
    void GenerarParedes()
    {
        int paredes=0;
        while(paredes<100)
        {
            int x=rand()%FIL;
            int y=rand()%COL;

            if(lab[x][y]==' ')
            {
                paredes++;
                int lim=1+rand()%10;
                int puestas=0;
                switch(rand()%4)
                {
                case 0:

                    while(lab[x][y]==' ')
                    {
                        if(puestas==lim)break;
                        puestas++;
                        lab[x][y]='0';
                        x--;
                    }
                    break;
                case 1:
                    while(lab[x][y]==' ')
                    {
                        if(puestas==lim)break;
                        puestas++;
                        lab[x][y]='0';
                        x++;
                    }
                    break;
                case 2:
                    while(lab[x][y]==' ')
                    {
                        if(puestas==lim)break;
                        puestas++;
                        lab[x][y]='0';
                        y--;
                    }
                    break;
                case 3:
                    while(lab[x][y]==' ')
                    {
                        if(puestas==lim)break;
                        puestas++;
                        lab[x][y]='0';
                        y++;
                    }
                    break;
                }
            }
        }
    }
    /**
        @brief Coloca el punto de llegada
        @param void
        @return void
 */

    void FinGenerar()
    {
        for(int i=0; i<FIL; i++)
        {
            for(int j=0; j<COL-1; j++)
            {
                if(lab[i][j]=='O') lab[i][j]=' ';
                if(j==COL-2 && lab[i][j]!='F') lab[i][j]='0';
                if(lab[i][j]=='F')
                {
                    lab[i][j+1]='F';
                    lab[i][j]=' ';
                }
            }
        }
    }
    /**
        @brief Funcion para mover en la opcion de jugar
        @param void
        @return tecla es el movimiento en teclado al que va a responder el personaje
 */
    void mover(int tecla)
    {
        switch(tecla)
        {
        case 72://arriba
            if(lab[puntox-1][puntoy]==' ')
            {
                system("cls");
                lab[puntox-1][puntoy]='*';
                puntox--;
                Imprimir();
            }
            else if(lab[puntox-1][puntoy]=='*' || lab[puntox-1][puntoy]=='I')
            {
                system("cls");
                lab[puntox][puntoy]=' ';
                puntox--;
                Imprimir();
            }
            break;

        case 80://abajo
            if(lab[puntox+1][puntoy]=='*' || lab[puntox+1][puntoy]=='I')
            {
                system("cls");
                lab[puntox][puntoy]=' ';
                puntox++;
                Imprimir();
            }
            else if(lab[puntox+1][puntoy]==' ')
            {
                system("cls");
                lab[puntox+1][puntoy]='*';
                puntox++;
                Imprimir();
            }
            break;

        case 75://izquierda
            if(lab[puntox][puntoy-1]==' ')
            {
                system("cls");
                lab[puntox][puntoy-1]='*';
                puntoy--;
                Imprimir();
            }
            else if(lab[puntox][puntoy-1]=='*' || lab[puntox][puntoy-1]=='I')
            {
                system("cls");
                lab[puntox][puntoy]=' ';
                puntoy--;
                Imprimir();
            }
            break;

        case 77://derecha
            if(lab[puntox][puntoy+1]=='*' || lab[puntox][puntoy+1]=='I')
            {
                system("cls");
                lab[puntox][puntoy]=' ';
                puntoy++;
                Imprimir();
            }
            else if(lab[puntox][puntoy+1]==' ')
            {
                system("cls");
                lab[puntox][puntoy+1]='*';
                puntoy++;
                Imprimir();
            }
            break;
        }
    }


private:
    char lab[FIL][COL];
    int x;
    int y;


};
