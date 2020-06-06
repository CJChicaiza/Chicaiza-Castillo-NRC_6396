#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include "ProcCosSin.cpp"
#include "LibraryCris.h"

int main (){
	ProcCosSin ObjCosSin;
	float x,aCos,aSin,aTan;	
	printf("Ingrese el valor de x:	");
	scanf("%f",&x);
	x=degToRad(x);
	aSin=ObjCosSin.Sin(x,1);
	aCos=ObjCosSin.Cosin(x,1);
	printf("\nEl valor de X en radianes es:	%f\nSu Seno es:	%f\nSu Coseno es:	%f\n",x,aSin,aCos);
	return 0;	
}
