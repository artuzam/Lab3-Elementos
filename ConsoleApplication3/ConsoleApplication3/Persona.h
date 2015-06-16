#pragma once
#include <string>

using namespace std;

class Persona{

public:
	Persona(int, string);
	~Persona();
	void setNombre(string);
	string getNombre();
	void setID(int);
	int getID();

private: 
	string nombre;
	int id;
};

