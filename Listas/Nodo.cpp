#include "Nodo.h"
Nodo::Nodo()
{
}

Nodo::~Nodo()
{
// TODO : implement
}

Nodo *Nodo::getSiguiente(void)
{
return siguiente;
}

void Nodo::setSiguiente(Nodo *newSiguiente)
{
siguiente = newSiguiente;
}

Nodo::Nodo(int newNumero, Nodo *newSiguiente)
{
numero=newNumero;
siguiente=newSiguiente;
}

int Nodo::getNumero(void)
{
return numero;
}

void Nodo::setNumero(int newNumero)
{
numero = newNumero;
}
