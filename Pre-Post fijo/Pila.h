#include <iostream>
class Pila{
	class Nodo{
		public :
		   Nodo *siguiente;
		   char dato;
			Nodo(char x){
				dato =x;
				siguiente = NULL;
			}
	};
	public:
		Nodo *cima;
		Pila(){
			cima=NULL;
		}
	void insertar (char dato);
	char quitar();
	char cimaPila();
	char pilaVacia();
	void limpiarPila();
	~Pila(){
		limpiarPila();
	}
	void imprimirPila();

};
