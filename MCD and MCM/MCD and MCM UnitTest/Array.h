/***********************************************************************
 * Module:  Array.h
 * Author:  Chicaiza Jaya Cristopher Jennsy 
 * Modified: Tuesday, June 2, 2020 8:56:55 AM
 * Purpose: Declaration of the class Array
 ***********************************************************************/

#if !defined(__MCM_and_MCD_Array_h)
#define __MCM_and_MCD_Array_h

class Array
{
public:
   Array();
   void wax(int * v, int dim);
   void print(int * v, int dim);
   void enter(int * v, int dim);
   int mcm(int * v, int dim);
   int mcd(int * v, int dim);

protected:
private:

};

#endif
