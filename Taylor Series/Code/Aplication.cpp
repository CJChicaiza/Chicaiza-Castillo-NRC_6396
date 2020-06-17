#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include "ProcCosSin.cpp"
#include "LibraryCris.h"
#include "Ingreso.h"
#include <sstream>

int main (){
	ProcCosSin ObjCosSin;
	string n;
	float x,aCos,aSin,aTan;	
	Ingreso ingreso;
	n=ingreso.leer("Ingrese el valor de x:	",2);
	istringstream (n) >> x;
//	cout<<x<<endl;
	x=degToRad(x);
	aSin=ObjCosSin.Sin(x,1);
	aCos=ObjCosSin.Cosin(x,1);
	aTan=ObjCosSin.calcTang(x,1);
	printf("\nEl valor de X en radianes es:	%f\nSu Seno es:	%f\nSu Coseno es:	%f\nSu tangente es: %f\n ",x,aSin,aCos,aTan);
	return 0;	
}
