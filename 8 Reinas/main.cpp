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
#include <conio.h>
#include <ctype.h>
#include <sstream>
#include "8Reinas.cpp"
#include "Ingreso.h"
using namespace std;
int main() {
	int n;
	string f;
	Ingreso ingreso;
	int *contador=new int[1];
	*(contador+0)=0;
	f=ingreso.leer("Cuantas reinas: ",2);
	istringstream (f) >> n;
	Reina *obj= new Reina(n);
	cout<<"Las posibles soluciones son:\n"<<endl;
	obj->solucionReinas(contador);
	cout<<"El programa realizo "<<*(contador+0)<<" iteraciones"<<endl;
	cout<<"Se creo el archivo solucion.txt"<<endl;
	system("pause");
	return 0;
}
