#include "stdafx.h"
#include "ElementoPersona.h"

ElementoPersona::ElementoPersona(Persona * persona) : Elemento(),
persona(persona){

}

ElementoPersona::~ElementoPersona(){
	delete persona;
}

int ElementoPersona::compareTo(Elemento * otro) {
	int cmp = 0;
	ElementoPersona * ePersona = static_cast<ElementoPersona *>(otro);
	if (ePersona != 0) {
		cmp = this->persona->getID() < ePersona->persona->getID() ? -1 : this->persona->getID() == ePersona->persona->getID ? 0 : 1;
	}
	return cmp;
}

void ElementoPersona::imprimir(ostream & out) const {
	out << persona;
}
