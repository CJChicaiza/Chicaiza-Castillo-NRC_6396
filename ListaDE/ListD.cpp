#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

#include "ListD.h"
#include "NodeD.cpp"

#pragma once

using namespace std;

template<class T>
ListaDoble<T>::ListaDoble() {
	this->node = NULL;
}

template<class T>
void ListaDoble<T>::anadirInicio(T dato) {
    if (this->vacio()) {
        this->node = new NodoDoble<T>(dato, NULL, NULL);
    }
    else {
        NodoDoble<T>* aux = new NodoDoble<T>(dato, node, NULL);
        this->node->setAtrasNode(aux);
        this->node = aux;
    }
}

template<class T>
void ListaDoble<T>::anadirFinal(T dato) {

    if (vacio()) {
        this->node = new NodoDoble<T>(dato, NULL, NULL);
    }
    else {
        NodoDoble<T>* aux = new NodoDoble<T>();
        NodoDoble<T>* aux1 = new NodoDoble<T>();

        aux = this->node;

        while (aux != NULL)
        {
            aux1 = aux;
            aux = aux->getSiguienteNode();
        }

        NodoDoble<T>* aux2 = new NodoDoble<T>(dato, aux1->getSiguienteNode(), aux1);

        aux1->setSiguienteNode(aux2);
    }
}

template<class T>
void ListaDoble<T>::anadirMitad(T dato, int posicion) {
    if (vacio()) {
        this->node = new NodoDoble<T>(dato, NULL, NULL);
    }
    else if (this->tamano() <= 1 || this->tamano() <= posicion) {
        cout << "Fuera de rango" << endl;
        system("Pause");
    }
    else {
        NodoDoble<T>* aux = new NodoDoble<T>();
        NodoDoble<T>* aux1 = new NodoDoble<T>();

        aux = this->node;

        int indice = 0;
        while (aux != NULL && indice != posicion)
        {
            aux1 = aux;
            aux = aux->getSiguienteNode();
            indice++;
        }
        NodoDoble<T>* atrasNode = aux1->getAtrasNode();
        NodoDoble<T>* aux2 = new NodoDoble<T>(dato, aux1, atrasNode);

        atrasNode->setSiguienteNode(aux2);
        aux1->setAtrasNode(aux2);
    }
}

template<class T>
int ListaDoble<T>::tamano() {
    NodoDoble<T>* aux = new NodoDoble<T>();
    NodoDoble<T>* aux1 = new NodoDoble<T>();

    aux = this->node;

    int indice = 0;
    while (aux != NULL)
    {
        indice++;
        aux1 = aux;
        aux = aux->getSiguienteNode();
    }

    return indice;
}

template<class T>
void ListaDoble<T>::borrarInicio() {
    if (this->vacio()) {
        cout << "No hay elementos" << endl;
        return;
    }

    NodoDoble<T>* aux = NULL;
    NodoDoble<T>* aux1 = NULL;

    aux = this->node;
    aux1 = aux->getSiguienteNode();
    this->node = aux1;
    delete aux;
}

template<class T>
void ListaDoble<T>::borrarFinal() {
    if (this->vacio()) {
        cout << "No hay elementos" << endl;
        return;
    }

    NodoDoble<T>* aux;
    NodoDoble<T>* aux1 = NULL;
    NodoDoble<T>* aux2 = NULL;

    aux = this->node;

    while (aux != NULL)
    {
        aux2 = aux1;
        aux1 = aux;
        aux = aux->getSiguienteNode();
    }

    if (aux2 == NULL) {
        this->node = NULL;
        delete aux1;
    }
    else {
        aux2->setSiguienteNode(aux1->getSiguienteNode());
        delete aux1;
    }
}

template<class T>
void ListaDoble<T>::borrarMitad(int posicion) {

    if (vacio()) {
        cout << "No hay elementos" << endl;
        return;
    }
    else if (this->tamano() <= 1 || this->tamano() <= posicion) {
        cout << "Fuera de rango" << endl;
        system("Pause");
        return;
    }
    else {
        NodoDoble<T>* aux;
        NodoDoble<T>* aux1 = NULL;

        aux = this->node;
        int indice = 0;

        while (aux != NULL && indice != posicion)
        {
            aux1 = aux;
            aux = aux->getSiguienteNode();
            indice++;
        }

        NodoDoble<T>* siguienteNode = aux1->getSiguienteNode();
        NodoDoble<T>* atrasNode = aux1->getAtrasNode();
        if (atrasNode == NULL) {
            siguienteNode->setAtrasNode(NULL);
            this->node = siguienteNode;
            delete aux1;
        }
        else {
            atrasNode->setSiguienteNode(siguienteNode);
            siguienteNode->setAtrasNode(atrasNode);
            aux1 = NULL;
            delete aux1;
        }
    }
}

template<class T>
bool ListaDoble<T>::vacio() {
	return (this->node == NULL) ? true : false;
}

template<class T>
string ListaDoble<T>::to_string() {
    ostringstream oss;
    NodoDoble<T>* aux = new NodoDoble<T>();
    aux = this->node;
    if (!aux) {
        oss << "NULL ";
    }
    while (aux != NULL) {
        oss << aux->to_string();
        aux = aux->getSiguienteNode();
    }

    oss << "NULL";

    return oss.str();
}


template<class T>
ListaDoble<T>::~ListaDoble() {}
