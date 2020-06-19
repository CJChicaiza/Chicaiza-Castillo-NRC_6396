/***********************************************************************
 * Module:  Operacion.h
 * Author:  Angel castillo
 * Modified: martes, 26 de mayo de 2020 18:10:41
 * Purpose: Declaration of the class Operacion
 ***********************************************************************/

#if !defined(__OperacionMatematica_Operacion_h)
#define __OperacionMatematica_Operacion_h

class Fraccion;

class Operacion
{
public:
   float getNumeradorA(void);
   void setNumeradorA(float newNumeradorA);
   float getDenominadorB(void);
   void setDenominadorB(float newDenominadorB);
   Operacion();
   float getNumeradorC(void);
   void setNumeradorC(float newNumeradorC);
   float getDenominadorD(void);
   void setDenominadorD(float newDenominadorD);

   Fraccion* fraccion;

protected:
private:
   float numeradorA;
   float denominadorB;
   float numeradorC;
   float denominadorD;


};

#endif