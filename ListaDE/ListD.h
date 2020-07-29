#ifndef LISTD_H
#define LISTD_H

#include <iostream>

#include "NodeD.h"

using namespace std;

template<class T>
class ListaDoble
{
public:
    ListaDoble();

    void anadirInicio(T dato);
    void anadirFinal(T dato);
    void anadirMitad(T dato, int position);

    void borrarInicio();
    void borrarFinal();
    void borrarMitad(int posicion);

    int tamano();
    bool vacio();

    string to_string();

    virtual ~ListaDoble();

protected:
private:
    NodoDoble<T>* node;
};

#endif
