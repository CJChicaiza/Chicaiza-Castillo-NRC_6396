/***********************************************************************
 * Module:  Matriz.h
 * Author:  Angel castillo
 * Modified: martes, 2 de junio de 2020 9:16:51
 * Purpose: Declaration of the class Matriz
 ***********************************************************************/

#if !defined(__Matriz_Matriz_h)
#define __Matriz_Matriz_h

class Matriz
{
public:
   void encerar(int **matriz, int n);
   void ingresar(int **matriz, int n);
   void imprimir(int **matriz, int n);
   int **tamano(int n);
   void calculo(int **matriz, int **mat1, int n, int e);

protected:
private:

};

#endif
