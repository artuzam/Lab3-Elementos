#pragma once
#include "Elemento.h"
#include "Persona.h"
#include <iostream>

using namespace std;

class ElementoPersona : public Elemento {


private:
	Persona * persona;

public:
	ElementoPersona(Persona*);
	virtual ~ElementoPersona();
	Persona * getPersona();
	int compareTo(Elemento *);
	void imprimir(ostream&)const;
};

