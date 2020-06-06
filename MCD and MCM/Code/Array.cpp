/***********************************************************************
 * Module:  Array.cpp
 * Author:  Chicaiza Jaya Cristopher Jennsy 
 * Modified: Tuesday, June 2, 2020 8:56:55 AM
 * Purpose: Implementation of the class Array
 ***********************************************************************/

#include "Array.h"
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#define MAX 999
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Array::Array()
// Purpose:    Implementation of Array::Array()
// Return:     
////////////////////////////////////////////////////////////////////////

Array::Array()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Array::wax(int * v, int dim)
// Purpose:    Implementation of Array::wax()
// Parameters:
// - v
// - dim
// Return:     void
////////////////////////////////////////////////////////////////////////

void Array::wax(int * v, int dim)
{
   for(int i=0;i<dim;i++)
	*(v+i)=0;
}

////////////////////////////////////////////////////////////////////////
// Name:       Array::print(int * v, int dim)
// Purpose:    Implementation of Array::print()
// Parameters:
// - v
// - dim
// Return:     void
////////////////////////////////////////////////////////////////////////

void Array::print(int * v, int dim)
{
   for(int i=0;i<dim;i++){
	printf("%d,",*(&(*v)));
	*(v++);
//	cout<<v[i]<<", ";
	}
	printf("\n");
}

////////////////////////////////////////////////////////////////////////
// Name:       Array::enter(int * v, int dim)
// Purpose:    Implementation of Array::enter()
// Parameters:
// - v
// - dim
// Return:     void
////////////////////////////////////////////////////////////////////////

void Array::enter(int * v, int dim)
{
   for(int i=0;i<dim;i++){
		cout<<"Valor "<<i+1<<endl;
	//	scanf("%d",*(&v)+i);
		cin>>*(v+i);
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Array::mcm(int * v, int dim)
// Purpose:    Implementation of Array::mcm()
// Parameters:
// - v
// - dim
// Return:     int
////////////////////////////////////////////////////////////////////////

int Array::mcm(int * v, int dim)
{
	int i,j,k,h,w,p;
	h=0;
    int **multiplym=(int **)malloc(dim*sizeof(int *));
    for(j=0;j<dim;j++)
        *(multiplym+j)=(int *)malloc(MAX*sizeof(int));

    int f1, f2, f3=1;
    for(i=0;i<dim;i++)
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
    for(i=1;i<dim;)
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
            if((i == dim) && (firstm == w))
            {
                return firstm;
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       Array::mcd(int * v, int dim)
// Purpose:    Implementation of Array::mcd()
// Parameters:
// - v
// - dim
// Return:     int
////////////////////////////////////////////////////////////////////////

int Array::mcd(int * v, int dim)
{
	int num, res, mcd;
	mcd=0;
 	for (int i=0;i<dim;i++){
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
