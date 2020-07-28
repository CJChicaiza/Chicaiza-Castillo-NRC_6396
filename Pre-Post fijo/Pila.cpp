#include"Pila.h"
using namespace std;
char Pila::pilaVacia(){
	return cima==NULL;
}

void Pila::insertar(char dato){
	Nodo *nuevo;
	nuevo=new Nodo(dato);
	nuevo->siguiente=cima;
	cima=nuevo;
}

char Pila::quitar(){
	char aux=cima->dato;
	if(pilaVacia()){
        //throw "Pila Vacia no existe datos ";
        return ' ';
	}
	//cout<< "----------------"<<endl<<aux<<endl<<"------------"<<endl;


	cima=cima->siguiente;
	return aux;
}
char Pila::cimaPila(){
	if(pilaVacia())
	throw "Pila Vacia";
	return cima->dato;
}
void Pila::limpiarPila(){
	Nodo *valor;
	while(!pilaVacia()){
		valor=cima;
		cima=cima->siguiente;
		delete valor;
	}
}
void Pila::imprimirPila()
{
    Nodo *valor;
    valor=cima;
    cout<<endl<<"TOPE";
	while(valor!=NULL){
		cout<<"->"<<valor->dato;
		valor=valor->siguiente;
	}
	cout<<endl;

}

