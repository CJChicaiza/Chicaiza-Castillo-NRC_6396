#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

#include "NodeD.h"

#pragma once

using namespace std;

template<class T>
NodoDoble<T>::NodoDoble() {
	this->siguiente = NULL;
	this->atras = NULL;
}

template<class T>
NodoDoble<T>::NodoDoble(T dato, NodoDoble* siguiente, NodoDoble* atras) {
	this->data = dato;
	this->siguiente = siguiente;
	this->atras = atras;
}

template<class T>
void NodoDoble<T>::setDato(T dato) {
	this->data = dato;
}

template<class T>
void NodoDoble<T>::setSiguienteNode(NodoDoble* node) {
	this->siguiente = node;
}

template<class T>
void NodoDoble<T>::setAtrasNode(NodoDoble* node) {
	this->atras = node;
}

template<class T>
T NodoDoble<T>::getDato() {
	return this->data;
}

template<class T>
NodoDoble<T>* NodoDoble<T>::getSiguienteNode() {
	return this->siguiente;
}

template<class T>
NodoDoble<T>* NodoDoble<T>::getAtrasNode() {
	return this->atras;
}

template<class T>
string NodoDoble<T>::to_string() {
	ostringstream oss;
	oss << " <- "<< this->data << " -> ";

	return oss.str();
}

template<class T>
NodoDoble<T>::~NodoDoble() {}
