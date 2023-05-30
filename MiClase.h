#pragma once
#include "Pila.h"
#include <iostream>
#include <string>
using namespace std;
class MiClase {
	string Nombre;
public:
	MiClase();
	MiClase(string Nombre) { this->Nombre = Nombre; }
	string obtenerNombre() { return Nombre; }
	friend ostream& operator<<(ostream& out, const MiClase& mc);
};
ostream& operator<<(ostream& out, const MiClase& mc) {
	return out << mc.Nombre;
}

