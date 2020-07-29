#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "listD.h"
#include "listD.cpp"
#include "Libraries/Menu.cpp"
#include "Libraries/Input.cpp"
#include "Libraries/To_number.cpp"


using namespace std;

int option();
template<typename T>
void menu(ListaDoble<T> lista);

int option() {
    Menu _menu;
    char** _option = (char**)calloc(8, sizeof(char*));
    *(_option + 0) = "Introducir por cola";
    *(_option + 1) = "Introducir por cabeza";
    *(_option + 2) = "Introducir por posicion";
    *(_option + 3) = "Eliminar por cola";
    *(_option + 4) = "Eliminar por cabeza";
    *(_option + 5) = "Eliminar por posicion";
    *(_option + 6) = "Imprimir";
    *(_option + 7) = "Salir";

    return _menu.options("Seleccione una opcion", _option , 8);
}

template<typename T>
void menu(ListaDoble<T>* lista) {
    Input input;
    char repuesta;
    int i,j;
    string dato;

    switch (option()) {
    case 1:
        do {
            system("cls");
            i = to_int(input.input_int_number("Ingrese un numero: "));
            lista->anadirFinal(i);
            fflush(stdin);
            cout << "Quiere continuar? (S/N): ";
            scanf("%c", &repuesta);
            fflush(stdin);
        } while (repuesta != 'N' && repuesta != 'n');
        break;
    case 2:
        do {
            system("cls");
            i = to_int(input.input_int_number("Ingrese un numero: "));
            lista->anadirInicio(i);
            fflush(stdin);
            cout << "Quiere continuar? (S/N): ";
            scanf("%c", &repuesta);
            fflush(stdin);
        } while (repuesta != 'N' && repuesta != 'n');
        break;
    case 3:
        do {
            system("cls");
            i = to_int(input.input_int_number("Ingrese un numero: "));
            j = to_int(input.input_int_number("Ingrese la posicion: "));
            lista->anadirMitad(i,j);
            fflush(stdin);
            cout << "Quiere continuar? (S/N): ";
            scanf("%c", &repuesta);
            fflush(stdin);
        } while (repuesta != 'N' && repuesta != 'n');
        break;
    case 4:
        do {
            system("cls");
            i = to_int(input.input_int_number("Eliminado por cola  "));
            lista->borrarFinal();
            fflush(stdin);
            cout << "Quiere continuar? (S/N): ";
            scanf("%c", &repuesta);
            fflush(stdin);
        } while (repuesta != 'N' && repuesta != 'n');
        break;
    case 5:
        do {
            system("cls");
            i = to_int(input.input_int_number("Eliminado por cabeza "));
            lista->borrarInicio();
            fflush(stdin);
            cout << "Quiere continuar? (S/N): ";
            scanf("%c", &repuesta);
            fflush(stdin);
        } while (repuesta != 'N' && repuesta != 'n');
        break;
    case 6:
        do {
            system("cls");
            i = to_int(input.input_int_number("Ingrese la posicion: "));
            lista->borrarMitad(i);
            fflush(stdin);
            cout << "Quiere continuar? (S/N): ";
            scanf("%c", &repuesta);
            fflush(stdin);
        } while (repuesta != 'N' && repuesta != 'n');
        break;
    case 7:
        system("cls");
        dato=lista->to_string();
        cout << dato<<endl;
        system("pause");
        break;
    default:
        exit(0);
        break;
    }
}
int main()
{
    ListaDoble<int> lista;
    do {
        menu(&lista);
    } while (true);
    return 0;

}

