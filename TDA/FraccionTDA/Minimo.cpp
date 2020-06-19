/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/
#include<iostream>
#include <sstream>
#include"Operacion.cpp"
#include"Fraccion.cpp"
#include"Ingreso.h"

using namespace std;

int main(){
	
	Operacion obj;
	Fraccion obj2;
	Ingreso ingreso;
	float a,b,c,d;
	string dim;
	
		cout<<">Ingrese los datos (a/b*c/d)"<<endl;
	
		dim=ingreso.leer("Ingrese el numerador",2);
    	istringstream (dim) >> a;
		obj.setNumeradorA(a);
	

		dim=ingreso.leer("Ingrese el denominador b",2);
    	istringstream (dim) >> b;
		obj.setDenominadorB(b);
	

		dim=ingreso.leer("Ingrese el numerador c",2);
    	istringstream (dim) >> c;
		obj.setNumeradorC(c);
		
		dim=ingreso.leer("Ingrese el denominador d",2);
    	istringstream (dim) >> d;
		obj.setDenominadorD(d);
		
		obj2.calcular(obj.getNumeradorA(),obj.getDenominadorB(),obj.getNumeradorC(),obj.getDenominadorD());

		return 0;
	}
