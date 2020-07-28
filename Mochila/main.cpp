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
#include <stdio.h>
#include "Mochila.cpp"
#include <conio.h>
#include <ctype.h>
#include <sstream>
//#include "Ingreso.h"
int main()
{
    Mochila proc;
    int n,p;
    string f;
    Ingreso ingreso;
    f=ingreso.leer("Ingrese la cantidad de objetos: ",2);
    istringstream (f) >> n;
    f=ingreso.leer("Ingrese el peso maximo de la mochila: ",2);
    istringstream (f) >> p;
    int r=proc.mochilaproc(n+1,p+1);
    cout<<"El mayor beneficio es: "<< r <<endl;
}
