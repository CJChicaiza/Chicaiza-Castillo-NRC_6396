#ifndef NODO_H
#define NODO_H
class Nodo
{
public:
Nodo();
Nodo(int newNumero, Nodo *newSiguiente);
~Nodo();
Nodo *getSiguiente(void);
void setSiguiente(Nodo *newSiguiente);
int getNumero(void);
void setNumero(int newNumero);
protected:
private:
int numero;
Nodo *siguiente;
};
#endif
