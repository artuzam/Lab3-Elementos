#include "stdafx.h"
#include "Persona.h"


Persona::Persona(int, string){
	this->nombre = nombre;
	this->id = id;
}

Persona::~Persona(){
}

string Persona::getNombre() {
	return this->nombre;
}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}

int Persona::getID() {
	return this->id;
}

void Persona::setID(int id) {
	this->id = id;
}