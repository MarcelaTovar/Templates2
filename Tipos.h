#pragma once
#include "Pila.h"
#include <iostream>
#include <string>
#include "MiClase.h"
using namespace std;
template<typename T>
void Tipos(T x) {
	Pila<T> variablePila;
	const size_t tamVariablePila = 10;
	T valorTemporal = 1;
	
	cout << "\n- - > Insertar elementos en intPila\n";
	for (size_t i = 0; i < tamVariablePila; ++i){
		variablePila.insertar(valorTemporal);
		cout << (int) valorTemporal++ << ' ';
	}
	cout << "\n< - - Extraer elementos en intPila\n";
	while (!variablePila.estaVacia()) {
		cout << variablePila.arriba() << ' '; variablePila.extraer();
	}

}