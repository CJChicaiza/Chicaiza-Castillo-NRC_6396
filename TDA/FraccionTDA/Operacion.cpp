/***********************************************************************
 * Module:  Operacion.cpp
 * Author:  Angel castillo
 * Modified: martes, 26 de mayo de 2020 18:10:41
 * Purpose: Implementation of the class Operacion
 ***********************************************************************/

#include "Fraccion.h"
#include "Operacion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::getNumeradorA()
// Purpose:    Implementation of Operacion::getNumeradorA()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operacion::getNumeradorA(void)
{
   return numeradorA;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::setNumeradorA(float newNumeradorA)
// Purpose:    Implementation of Operacion::setNumeradorA()
// Parameters:
// - newNumeradorA
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::setNumeradorA(float newNumeradorA)
{
   numeradorA = newNumeradorA;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::getDenominadorB()
// Purpose:    Implementation of Operacion::getDenominadorB()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operacion::getDenominadorB(void)
{
   return denominadorB;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::setDenominadorB(float newDenominadorB)
// Purpose:    Implementation of Operacion::setDenominadorB()
// Parameters:
// - newDenominadorB
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::setDenominadorB(float newDenominadorB)
{
   denominadorB = newDenominadorB;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::Operacion()
// Purpose:    Implementation of Operacion::Operacion()
// Return:     
////////////////////////////////////////////////////////////////////////

Operacion::Operacion()
{

}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::getNumeradorC()
// Purpose:    Implementation of Operacion::getNumeradorC()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operacion::getNumeradorC(void)
{
   return numeradorC;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::setNumeradorC(float newNumeradorC)
// Purpose:    Implementation of Operacion::setNumeradorC()
// Parameters:
// - newNumeradorC
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::setNumeradorC(float newNumeradorC)
{
   numeradorC = newNumeradorC;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::getDenominadorD()
// Purpose:    Implementation of Operacion::getDenominadorD()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operacion::getDenominadorD(void)
{
   return denominadorD;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::setDenominadorD(float newDenominadorD)
// Purpose:    Implementation of Operacion::setDenominadorD()
// Parameters:
// - newDenominadorD
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::setDenominadorD(float newDenominadorD)
{
   denominadorD = newDenominadorD;
}
