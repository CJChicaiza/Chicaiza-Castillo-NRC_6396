#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "list_D.h"
#include "list_D.cpp"
#include "Libraries/Menu.cpp"
#include "Libraries/Input.cpp"
#include "Libraries/To_number.cpp"


using namespace std;

int option();
template<typename T>
void menu(List_Double<T> _list);

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
void menu(List_Double<T>* _list) {
    Input _input;
    char _answer;
    int i,j;

    switch (option()) {
    case 1:
        do {
            system("cls");
            i = to_int(_input.input_int_number("Ingrese un numero: "));
            _list->add_end(i);
            fflush(stdin);
            cout << "Quiere continuar? (S/N): ";
            scanf("%c", &_answer);
            fflush(stdin);
        } while (_answer != 'N' && _answer != 'n');
        break;
    case 2:
        do {
            system("cls");
            i = to_int(_input.input_int_number("Ingrese un numero: "));
            _list->add_begin(i);
            fflush(stdin);
            cout << "Quiere continuar? (S/N): ";
            scanf("%c", &_answer);
            fflush(stdin);
        } while (_answer != 'N' && _answer != 'n');
        break;
    case 3:
        do {
            system("cls");
            i = to_int(_input.input_int_number("Ingrese un numero: "));
            j = to_int(_input.input_int_number("Ingrese la posicion: "));
            _list->add_in(i,j);
            fflush(stdin);
            cout << "Quiere continuar? (S/N): ";
            scanf("%c", &_answer);
            fflush(stdin);
        } while (_answer != 'N' && _answer != 'n');
        break;
    case 4:
        do {
            system("cls");
            i = to_int(_input.input_int_number("Eliminado por cola  "));
            _list->_delete_end();
            fflush(stdin);
            cout << "Quiere continuar? (S/N): ";
            scanf("%c", &_answer);
            fflush(stdin);
        } while (_answer != 'N' && _answer != 'n');
        break;
    case 5:
        do {
            system("cls");
            i = to_int(_input.input_int_number("Eliminado por cabeza "));
            _list->_delete_end();
            fflush(stdin);
            cout << "Quiere continuar? (S/N): ";
            scanf("%c", &_answer);
            fflush(stdin);
        } while (_answer != 'N' && _answer != 'n');
        break;
    case 6:
        do {
            system("cls");
            i = to_int(_input.input_int_number("Ingrese la posicion: "));
            _list->_delete_in(i);
            fflush(stdin);
            cout << "Quiere continuar? (S/N): ";
            scanf("%c", &_answer);
            fflush(stdin);
        } while (_answer != 'N' && _answer != 'n');
        break;
    case 7:
        system("cls");
        _list->to_string();
        system("pause");
        break;
    default:
        exit(0);
        break;
    }
}
int main()
{
    List_Double<int> _list;
    do {
        menu(&_list);
    } while (true);
    return 0;

}

