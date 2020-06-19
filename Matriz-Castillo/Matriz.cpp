/***********************************************************************
 * Module:  Matriz.cpp
 * Author:  Angel castillo
 * Modified: martes, 2 de junio de 2020 9:16:51
 * Purpose: Implementation of the class Matriz
 ***********************************************************************/

#include "Matriz.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
////////////////////////////////////////////////////////////////////////
// Name:       Matriz::encerar(int ___matriz, int n)
// Purpose:    Implementation of Matriz::encerar()
// Parameters:
// - ___matriz
// - n
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::encerar(int **matriz, int n)
{

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
           ** ((matriz+i)+j)=0;
    return;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::ingresar(int __matriz, int n)
// Purpose:    Implementation of Matriz::ingresar()
// Parameters:
// - __matriz
// - n
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::ingresar(int **matriz, int n)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&**(((matriz+i)+j)));

}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::imprimir(int __matriz, int n)
// Purpose:    Implementation of Matriz::imprimir()
// Parameters:
// - __matriz
// - n
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::imprimir(int **matriz, int n)
{
      for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		{
			printf("%d",((matriz+i)+j));
			printf("%*s",j+5,"");
		}
	printf("\n");
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::tamano(int n)
// Purpose:    Implementation of Matriz::tamano()
// Parameters:
// - n
// Return:     int
////////////////////////////////////////////////////////////////////////

int Matriz::tamano(int n)
{
  int **m , j;
    m =(int **)malloc(n*sizeof(int *));
    for(j=0;j<n;j++)
        **(m+j)=(int )malloc(n*sizeof(int));
    return **m;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::calculo(int __matriz, int __mat1, int n, int potencia)
// Purpose:    Implementation of Matriz::calculo()
// Parameters:
// - __matriz
// - __mat1
// - n
// - potencia
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::calculo(int **matriz1,int **matriz, int n, int potencia)
{
   int **matf;//=tamano(n);
	int **matf2;//=tamano(n);
	encerar(matf2,n);
	for(int k=1;k<=potencia;k++){
	encerar(matf2,n);
		if(k==1){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
						**((matf+i)+j)=**((matriz1+i)+j);
				}
			}
		}
		else{
   			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					for(int h=0;h<n;h++){
						**((matf+i)+j)=**((matf2+i)+j)+(**(matriz+i)+h)*(**(matriz1+h)+j);
						**((matf2+i)+j)=**((matf+i)+j);
						
					}
				}
			}
		}
		for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
						**((matriz+i)+j)=**((matf+i)+j);
				}
			}
	}
}
