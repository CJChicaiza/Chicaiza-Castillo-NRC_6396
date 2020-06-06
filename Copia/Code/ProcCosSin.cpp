/***********************************************************************
 * Module:  ProcCosSin.cpp
 * Author:  Chicaiza Jaya Cristopher Jennsy
 * Modified: Saturday, June 6, 2020 10:00:38 AM
 * Purpose: Implementation of the class ProcCosSin
 ***********************************************************************/

#include "ProcCosSin.h"
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#define MAX 999
////////////////////////////////////////////////////////////////////////
// Name:       ProcCosSin::ProcCosSin()
// Purpose:    Implementation of ProcCosSin::ProcCosSin()
// Return:     
////////////////////////////////////////////////////////////////////////

ProcCosSin::ProcCosSin()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       ProcCosSin::~ProcCosSin()
// Purpose:    Implementation of ProcCosSin::~ProcCosSin()
// Return:     
////////////////////////////////////////////////////////////////////////

ProcCosSin::~ProcCosSin()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       ProcCosSin::Sin(float x, int n)
// Purpose:    Implementation of ProcCosSin::Sin()
// Parameters:
// - x
// - n
// Return:     float
////////////////////////////////////////////////////////////////////////

float ProcCosSin::Sin(float x, int n)
{
   if( n > MAX )
         return x;
    return x-x*x/(((2*n+1)-1)*(2*n+1)  ) * Sin(x, n+1);
}

////////////////////////////////////////////////////////////////////////
// Name:       ProcCosSin::Cosin(float x, int n)
// Purpose:    Implementation of ProcCosSin::Cosin()
// Parameters:
// - x
// - n
// Return:     float
////////////////////////////////////////////////////////////////////////

float ProcCosSin::Cosin(float x, int n)
{
   if( n > MAX )
         return 1;
    return 1-x*x/( (2*n-1)*2*n ) * Cosin(x, n+1);
}
