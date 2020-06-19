#include "Matriz.cpp"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

/***********************************************************************
 * Module:  Apli.cpp
 * Author:  Angel castillo
 * Modified: martes, 2 de junio de 2020 9:10:38
 * Carrera:Software
 * NRC: 6396 
 ***********************************************************************/
using namespace std;

int main(int argc, char *argv[]){
	
	int n,p;
	int **matriz,**matriz1;
	Matriz matr;
	cout<<"Ingrese la dimencion de la matriz"<<endl;
	cin >> n;
	matriz=matr.tamano(n);
	matriz1=matr.tamano(n);
	matr.encerar(matriz,n);
	matr.imprimir(matriz,n);
	system("pause");

	cout<<"Ingrese la dimencion de la matriz"<<endl;
	matr.ingresar(matriz,n);
	matr.imprimir(matriz,n);
	cout<<endl;
	system("pause");
	
	cout<<"Ingrese la patencia"<<endl;
	cin >> p;
	matr.calculo(matriz,matriz1,n,p);
	matr.imprimir(matriz,n);
	system("pause");
	return 0;
}
