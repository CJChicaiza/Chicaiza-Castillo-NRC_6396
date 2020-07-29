#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
class Lista
{
public:
void InsertarInicio(int numero);
void InsertarFinal(int numero);
void Imprimir(void);
int vacio(void);
protected:
private:
Nodo *siguiente;
};
#endif
