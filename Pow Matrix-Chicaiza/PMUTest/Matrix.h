/***********************************************************************
 * Module:  Matrix.h
 * Author:  Chicaiza Jaya Cristopher Jennsy
 * Modified: Tuesday, June 2, 2020 6:53:46 AM
 * Purpose: Declaration of the class Matrix
 ***********************************************************************/

#if !defined(__PowMatrix_Matrix_h)
#define __PowMatrix_Matrix_h

class Matrix
{
public:
   Matrix();
   void wax(int ** mat, int dim);
   void print(int ** mat, int dim);
   void enter(int ** mat, int dim);
   int ** nmatrix(int dim);
   void process(int ** mat1, int ** matr, int dim, int pow);

protected:
private:

};

#endif
