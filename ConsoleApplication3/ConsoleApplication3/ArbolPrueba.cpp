// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ArbolBinario.h"
#include "Elemento.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[]){

	int main(int argc, char **argv); {

		ArbolBinario ArbolDoubles;
			ArbolDoubles.insertarElemento(new ElementoDouble(40.25));
			ArbolDoubles.insertarElemento(new ElementoDouble(6.4317));
			ArbolDoubles.insertarElemento(new ElementoDouble(17.289));
			ArbolDoubles.insertarElemento(new ElementoDouble(478.0));

		ArbolBinario ArbolPersonas;
		ArbolPersonas.insertarElemento(new ElementoPersona(new Persona (1, "Stefany")));
		ArbolPersonas.insertarElemento(new ElementoPersona(new Persona (2, "Maria")));
		ArbolPersonas.insertarElemento(new ElementoPersona(new Persona (3, "Daniel")));
		ArbolPersonas.insertarElemento(new ElementoPersona(new Persona(4, "Arturo")));

		cout << "Arbol Double: " << endl;
		cout << ArbolDoubles << endl;
		cout << "Arbol Persona: " << endl;
		cout << ArbolPersonas << endl;

		return 0;
	}
	return 0;
}

