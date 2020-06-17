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
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include "Array.cpp"
#include <sstream>
#include "Ingreso.h"

int main(int argc, char *argv[])
{
	int d,mcd,mcm;
	Ingreso ingreso;
	string n;
	Array objArray;
	n=ingreso.leer("Ingrese el numero n: ",2);
	istringstream (n) >> d;
	int *v=new int[d];
	objArray.wax(v,d);
	objArray.print(v,d);
	
	printf("\nIngrese los valores del array:\n");
	objArray.enter(v,d);
	objArray.print(v,d);
	system("pause");
	
	mcm=objArray.mcm(v,d);
	mcd=objArray.mcd(v,d);
	printf("El mcd es:	%d\nY el mcm es:	%d\n", mcd, mcm);
	free (v); //libera el espacio
	system("pause");
	return 0;
}
