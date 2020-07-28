#include <stdio.h>
#include "Lista.cpp"
#include "Lista.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{

    Lista lista;
	int dato,n, opcion;
	do
    {
    	cout<<"\n1. Ingrese un numero por inicio."<<endl;
    	cout<<"2. Ingrese un numero por el final."<<endl;
    	cout<<"3. Mostrar la lista."<<endl;
    	cout<<"4. Salir."<<endl;

        cin>>opcion;

        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1: cout<<"Digite un numero"<<endl;
					cin>>dato;
					lista.InsertarInicio(dato);
                    break;

            case 2: cout<<"Digite un numero"<<endl;
					cin>>dato;
					lista.InsertarFinal(dato);
                    break;
            case 3: lista.Imprimir();

                    break;
         }

         /* Fin del anidamiento */

    } while ( opcion != 4 );
//	getch();
	return 0;
}
