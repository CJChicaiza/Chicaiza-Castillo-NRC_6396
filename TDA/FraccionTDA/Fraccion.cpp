/***********************************************************************
 * Module:  Fraccion.cpp
 * Author:  Angel castillo
 * Modified: martes, 26 de mayo de 2020 18:07:40
 * Purpose: Implementation of the class Fraccion
 ***********************************************************************/

#include "Fraccion.h"
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;


////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::calcular(float b, float d)
// Purpose:    Implementation of Fraccion::calcular()
// Parameters:
// - b
// - d
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::calcular(float a, float b, float c,float d)
{
   	Fraccion fraccion;
   
			if(b==d){
				fraccion.setNumerador(a+c);
				fraccion.setDenominador(b+0);
				cout <<""<<fraccion.getNumerador()<<endl;
				cout <<"/"<<fraccion.getDenominador()<<endl;
				system("pause");
			}else{
				fraccion.setNumerador((a*d)+(c*b));
				fraccion.setDenominador(b*d);
				cout <<""<<endl;
				cout <<""<<endl;
				cout <<""<<fraccion.getNumerador();
				cout <<"/"<<fraccion.getDenominador()<<endl;
				system("pause");
				
			}
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getNumerador()
// Purpose:    Implementation of Fraccion::getNumerador()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::getNumerador(void)
{
   return numerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setNumerador(float newNumerador)
// Purpose:    Implementation of Fraccion::setNumerador()
// Parameters:
// - newNumerador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setNumerador(float newNumerador)
{
   numerador = newNumerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getDenominador()
// Purpose:    Implementation of Fraccion::getDenominador()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::getDenominador(void)
{
   return denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setDenominador(float newDenominador)
// Purpose:    Implementation of Fraccion::setDenominador()
// Parameters:
// - newDenominador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setDenominador(float newDenominador)
{
   denominador = newDenominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion()
// Purpose:    Implementation of Fraccion::Fraccion()
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::Fraccion()
{
}

