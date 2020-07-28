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
#include <fstream>
using namespace std;
class Reina{
	public:
		bool **validar;
		char **tablero;
		fstream archivo;
		int contador;
		int n;
		/**
        @brief Encerar el tablero
        @param void
        @return void
    */
		void encerarTablero(){
			for(int i=0;i<n;i++){
				validar[i]=new bool [n];
				tablero[i]=new char[n];
				for(int j=0;j<n;j++){
					*(*(validar+i)+j)=false;
					*(*(tablero+i)+j)='*';
				}
			}
		}
		/**
        @brief Crea el archivo al que se enviaran las respuestas
        @param void
        @return void
 */
		void crearArchivo(){
			archivo.open("solucion.txt",fstream::out); //para leer in, para salir es out escribir
			archivo<<"solucion "<<n<<"*"<<n<<endl<<endl;
			contador=0;
		}
		Reina (int n1){
			n=n1;
			validar = new bool *[n];
			tablero= new char *[n];
			encerarTablero();
			crearArchivo();
		}
		/**
        @brief Busca las posibles soluciones
        @param void
        @return x e y son las posiciones actuales
 */
		void solucion(int x, int y, int n1,int *f){
			*(f+0)=*(f+0)+1;
			*(*(tablero+x)+y)='R';
			bloquear(x,y);
			if(n1==n){
				mostrar();
			}else{
				for(int i=0;i<n;i++){
					if(*(*(validar+i)+y+1)==false){
						solucion(i,y+1,n1+1,f);
					}
				}
			}
			quitarRelleno(x,y);
		}
    /**
        @brief Bloquea las respues erradas
        @param void
        @return x e y son las posiciones
 */
	   void bloquear(int x,int y){
	   		int aux1,aux2;
	   		aux2=y;
	   		aux1=0;
	   		while(aux1<n){ //vertical
	   			*(*(validar+aux1)+aux2)=true;
	   			aux1++;
			}
			   aux2=0;
			   aux1=x;
			   while(aux2<n){
			    	*(*(validar+aux1)+aux2)=true;
	   			aux2++;
		    }
//diagonal negativa
        aux1 = x; aux2 = y;
        while(aux1>0 && aux2>0){
            aux1--; aux2--;
        }
        aux1++; aux2++;
        while(aux1<n && aux2<n){
            validar[aux1][aux2] = true;
            aux1++; aux2++;
        }

        //diagonal positiva
        aux1 = x; aux2 = y;
        while(aux1<n && aux2>0){
            aux1++; aux2--;
        }
        aux1--; aux2++;
        while(aux1>=0 && aux2<n){
            validar[aux1][aux2] = true;
            aux1--; aux2++;
        }

	   }
	   void quitarRelleno(int x,int y){
	   		*(*(tablero+x)+y)='*';
	   		for(int i=0;i<n;i++){
	   			for(int j=0;j<n;j++){
	   				*(*(validar+i)+j)=false;
				   }
			   }
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(*(*(tablero+i)+j)=='R')
					bloquear(i,j);
				}
			}
	   }
	   /**
        @brief Muestra las respuestas
        @param void
        @return void
 */
	   void mostrar(){
	   	contador++;
	   	archivo<<"Solucion N "<<contador<<endl;
	   	cout<<"Solucion N "<<contador<<endl;
	   	for(int i=0;i<n;i++){
	   		for(int j=0;j<n;j++){
	   			archivo<<*(*(tablero+i)+j)<<" ";
	   			cout<<*(*(tablero+i)+j)<<" ";
			   }
			   archivo<<endl;
			   cout<<endl;
		   }
		   archivo<<endl;
		   cout<<endl;
	   }
	   /**
        @brief Llama a la solucion
        @param void
        @return f
 */

	   void solucionReinas(int *f){
	   	for(int i=0;i<n;i++){
	   		solucion(i,0,1,f);
		   }
		   archivo.close();
	   }

};


















