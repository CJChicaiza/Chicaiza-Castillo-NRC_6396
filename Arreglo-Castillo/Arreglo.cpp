/***********************************************************************
 * Module:  Arreglo.cpp
 * Author:  Angel castillo
 * Modified: martes, 2 de junio de 2020 9:10:38
 * Purpose: Implementation of the class Arreglo
 ***********************************************************************/

#include "Arreglo.h"
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#define MAX 999

using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Arreglo::encerar(int _v, int n)
// Purpose:    Implementation of Arreglo::encerar()
// Parameters:
// - _v
// - n
// Return:     void
////////////////////////////////////////////////////////////////////////

void Arreglo::encerar(int *v, int n)
{
   	for(int i=0;i<n;i++){
			*(v+i)=0;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Arreglo::imprimir(int _v, int n)
// Purpose:    Implementation of Arreglo::imprimir()
// Parameters:
// - _v
// - n
// Return:     void
////////////////////////////////////////////////////////////////////////

void Arreglo::imprimir(int *v, int n)
{
   	cout<<"Datos guardados"<<endl;
	for(int i=0; i<n; i++){
	
		cout<<v[i]<<",";
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Arreglo::ingresar(int _v, int n)
// Purpose:    Implementation of Arreglo::ingresar()
// Parameters:
// - _v
// - n
// Return:     void
////////////////////////////////////////////////////////////////////////

void Arreglo::ingresar(int *v, int n){
	cout<<endl<<"Ingrese los Datos"<<endl;
	
   	for(int i=0; i<n; i++)
	{
		cout<<"numero"<<i+1<<endl;
		cin>>*(v+i);
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Arreglo::mcm(int _v, int n)
// Purpose:    Implementation of Arreglo::mcm()
// Parameters:
// - _v
// - n
// Return:     int
////////////////////////////////////////////////////////////////////////

int Arreglo::mcm(int *v, int n){
	
	int i,j;
	int k,h,w,p;
	h=0;
	int f1, f2, f3=1;
	int **multiplym=(int **)malloc(n*sizeof(int *));
    for(j=0;j<n;j++)
        *(multiplym+j)=(int *)malloc(MAX*sizeof(int));
    
    for(i=0;i<n;i++)
    {
         for(j=0;j<MAX;j++)
         {
             f1 = *(v+i);
             f2 = f1 * f3;
             f3++;
            *(*(multiplym+i)+j) = f2;
         }
         f3=1;
    }
    int firstm = *(*(multiplym+0)+h);
    for(i=1;i<n;)
    {
        for(j=0;j<MAX;)
        {
            if(firstm == *(*(multiplym+i)+j))
            {
                w = firstm;
                i++;
                j=0;
            }
            else
            {
                j++;
                p = j;
            }
            if((j == MAX)  &&  (h != MAX))
            {
                h++;
                firstm = *(*(multiplym+0)+h);
                i=1;
                j=0;
            }
            if((h == MAX-1) && (j == p))
            {
                printf("\nNo se puede calcular el mcm o es demasiado grande\n");
                return 0;
            }
            if((i == n) && (firstm == w))
            {
                return firstm;
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       Arreglo::mcd(int _v, int n)
// Purpose:    Implementation of Arreglo::mcd()
// Parameters:
// - _v
// - n
// Return:     int
////////////////////////////////////////////////////////////////////////

int Arreglo::mcd(int *v, int n){
	
	int num, res, mcd;
	mcd=0;
 	for (int i=0;i<n;i++){
        if (i == 0) {
            mcd = *(v+i);
 
        } else {
            do {
                res = mcd % *(v+i);
                mcd = *(v+i);
                *(v+i) = res;
            } while (res != 0);
        }
	}
	return mcd;

}
