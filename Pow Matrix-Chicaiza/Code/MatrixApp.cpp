/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
* AUTOR: Chicaiza Jaya Cristopher Jennsy                          *
* VERSION DEL PROGRAMA: 1.0                                       *
******************************************************************/
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "Matrix.cpp"
#include "Matrix.h"
int main()
{
	Matrix objMat;
	int d,p;
	int **mat1, **matr;
	
	printf("\nIngrese la dimension de la matriz: ");
	scanf("%d",&d);
	

	mat1=objMat.nmatrix(d);
	matr=objMat.nmatrix(d);
	objMat.wax(matr,d);
	
	printf("\nIngrese los valores de la matriz: \n");
	objMat.enter(mat1, d);
	objMat.print(mat1, d);
	printf("\n");

	printf("\nIngrese la potencia: ");
	scanf("%d",&p);
	
	objMat.process(mat1,matr,d,p);
	objMat.print(matr,d);
	system("pause");
   return 0;
}
