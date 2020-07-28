/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
* AUTOR: Chicaiza Jaya Cristopher Jennsy                          *
* VERSION DEL PROGRAMA: 1.0                                       *
******************************************************************/
#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <sstream>
#include "Ingreso.h"
using namespace std;
class Mochila
{
public:
    /**
        @brief Esta funcion crea la mochila y obtiene el valor max
        @param n, el numero de objetos, m el valor que puede llevar la mochila
        @return int
 */
    int mochilaproc(int n, int m)
    {
        int mochila[n][m];
        int peso[n+1];
        int valor[n+1];
        peso[0]=0;
        valor[0]=0;
        string fleer;
        Ingreso ingreso;
        for(int i=1; i<n; ++i)
        {
            cout<<"--------------------------------------------"<<endl;
            cout<<"Del objeto "<<i<<" ingrese: "<<endl;
            fleer=ingreso.leer("Ingrese el peso: ",2);
            istringstream (fleer) >> peso[i];
            fleer=ingreso.leer("Ingrese el valor: ",2);
            istringstream (fleer) >> valor[i];
          /*  cout<<"Ingrese peso del objeto "<<i<<" : "<<endl;
            cin>>peso[i];

            cout<<"Ingrese el valor del objeto "<<i<<" : "<<endl;
            cin>>valor[i];*/
        }
        for(int i=0; i<m; i++)
        {
            mochila[0][i]=0;
            if(i<n)
            {
                mochila[i][0]=0;
            }
        }
        for(int i=1; i<=n-1; ++i)
        {
            for(int j=1; j<=m-1; ++j)
            {
                if(j-peso[i]<0)
                {
                    mochila[i][j]=mochila[i-1][j];
                }
                else
                {
                    mochila[i][j]= max(mochila[i-1][j], mochila[i-1][j-peso[i]] + valor[i]);
                }
            }
        }
        cout<<"\n";
        int f=-1,vmax=0;
        for(int i=0; i<n; ++i)
        {
            for(int j=0; j<m; ++j)
            {
                cout<<mochila[i][j]<<" ";
                if(mochila[i][j]>f)
                {
                    f=mochila[i][j];
                    vmax=mochila[i][j];
                }

            }
            cout<<"\n";
        }
        cout<<"\n";
        return vmax;
    }


};
