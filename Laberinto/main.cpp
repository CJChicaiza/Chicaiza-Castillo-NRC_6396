/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
* AUTOR: Chicaiza Jaya Cristopher Jennsy                          *
* VERSION DEL PROGRAMA: 1.0                                       *
******************************************************************/
#include <cstdlib>
#include <iostream>
#include "Menu.cpp"

#include "Laberinto.cpp"
using namespace std;

    int option() {
    Menu _menu;
    char** _option = (char**)calloc(10, sizeof(char*));
    *(_option + 0) = "Jugar";
    *(_option + 1) = "Generar";
    *(_option + 2) = "Salir";

    return _menu.options("Seleccione una opcion", _option , 3);
}

    int main(int argc, char *argv[])
    {
        Laberinto proc;
        int o;

        switch (o=option()){
        case 1:system("cls");proc.EmpezarJug();return 0;break;
        case 2:system("cls");proc.EmpezarGen();break;
        case 3:system("cls");cout<<"Gracias por usar nuestro programa"<<endl;return 0; break;
        }
    }

