/***********************************************************************
 * Module:  Fraccion.h
 * Author:  Angel castillo
 * Modified: martes, 26 de mayo de 2020 18:07:40
 * Purpose: Declaration of the class Fraccion
 ***********************************************************************/

#if !defined(__OperacionMatematica_Fraccion_h)
#define __OperacionMatematica_Fraccion_h

class Fraccion
{
public:
   float getNumerador(void);
   void setNumerador(float newNumerador);
   float getDenominador(void);
   void setDenominador(float newDenominador);
   Fraccion();
   float calcular(float a,float b, float d,float c);

protected:
private:
   float numerador;
   float denominador;


};

#endif
