#ifndef NODED_H
#define NODED_H

#include <iostream>

using namespace std;

template<class T>
class NodoDoble
{
public:
    NodoDoble();
    NodoDoble(T dato, NodoDoble* siguiente, NodoDoble* atras);

    void setDato(T dato);
    void setSiguienteNode(NodoDoble* node);
    void setAtrasNode(NodoDoble* node);

    T getDato();
    NodoDoble* getSiguienteNode();
    NodoDoble* getAtrasNode();

    string to_string();

    virtual ~NodoDoble();

protected:
private:
    T data;
    NodoDoble* siguiente;
    NodoDoble* atras;
};

#endif
