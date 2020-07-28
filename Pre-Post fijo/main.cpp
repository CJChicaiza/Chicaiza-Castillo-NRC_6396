/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
* AUTOR: Chicaiza Jaya Cristopher Jennsy                          *
* VERSION DEL PROGRAMA: 1.0                                       *
******************************************************************/
#include "Notacion.cpp"
int main()
{
    cout<< "Ingrese la ec."<<endl;

    char eq[100] ;
    gets(eq);
    cout <<"Su notacion postfija es:"<<endl;
    postfix(eq);
    cout <<"El arreglo para notacion prefija es:"<<endl;
    prefix (eq);
    return 0;
}
