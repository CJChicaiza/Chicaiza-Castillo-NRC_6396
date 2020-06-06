/***********************************************************************
 * Module:  Matrix.cpp
 * Author:  Chicaiza Jaya Cristopher Jennsy
 * Modified: Tuesday, June 2, 2020 6:10:33 AM
 * Purpose: Implementation of the class Matrix
 ***********************************************************************/

#include "Matrix.h"
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"


////////////////////////////////////////////////////////////////////////
// Name:       Matrix::Matrix()
// Purpose:    Implementation of Matrix::Matrix()
// Return:     
////////////////////////////////////////////////////////////////////////

Matrix::Matrix()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::wax(int ** mat, int dim)
// Purpose:    Implementation of Matrix::wax()
// Parameters:
// - mat
// - dim
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matrix::wax(int ** mat, int dim)
{
   int i, j;
    for(i=0;i<dim;i++)
        for(j=0;j<dim;j++)
            *(*(mat+i)+j)=0;
    return;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::print(int ** mat, int dim)
// Purpose:    Implementation of Matrix::print()
// Parameters:
// - mat
// - dim
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matrix::print(int ** mat, int dim)
{
   for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++)
		{
			printf("%d",*(*(mat+i)+j));
			printf("%*s",j+5,"");
		}
	printf("\n");
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::enter(int ** mat, int dim)
// Purpose:    Implementation of Matrix::enter()
// Parameters:
// - mat
// - dim
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matrix::enter(int ** mat, int dim)
{
   for(int i=0;i<dim;i++)
		for(int j=0;j<dim;j++)
			scanf("%d",&(*(*(mat+i)+j)));
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::nmatrix(int ** mat, int dim)
// Purpose:    Implementation of Matrix::nmatrix()
// Parameters:
// - mat
// - dim
// Return:     int **
////////////////////////////////////////////////////////////////////////

int ** Matrix::nmatrix(int dim)
{
   int **m , j;
    m =(int **)malloc(dim*sizeof(int *));
    for(j=0;j<dim;j++)
        *(m+j)=(int *)malloc(dim*sizeof(int));
    return m;
}

////////////////////////////////////////////////////////////////////////
// Name:       Matrix::process(int ** mat, int dim)
// Purpose:    Implementation of Matrix::process()
// Parameters:
// - mat
// - dim
// Return:     int **
////////////////////////////////////////////////////////////////////////

void Matrix::process(int ** mat1, int ** matr, int dim, int pow)
{
	int **matf=nmatrix(dim);
	int **matf2=nmatrix(dim);
	wax(matf2,dim);
	for(int k=1;k<=pow;k++){
	wax(matf2,dim);
		if(k==1){
			for(int i=0;i<dim;i++){
				for(int j=0;j<dim;j++){
						*(*(matf+i)+j)=*(*(mat1+i)+j);
//						*(*(matf2+i)+j)=*(*(mat1+i)+j);
				}
			}
		}
		else{
   			for(int i=0;i<dim;i++){
				for(int j=0;j<dim;j++){
					for(int h=0;h<dim;h++){
						*(*(matf+i)+j)=*(*(matf2+i)+j)+(*(*(matr+i)+h))*(*(*(mat1+h)+j));
						*(*(matf2+i)+j)=*(*(matf+i)+j);
						
					}
				}
			}
		}
		for(int i=0;i<dim;i++){
				for(int j=0;j<dim;j++){
						*(*(matr+i)+j)=*(*(matf+i)+j);
				}
			}
	}
}
