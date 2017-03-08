#pragma once
#include <iostream>
#include <string>
#include "Lista.h"

using namespace std;

class Curso{
public:
	Curso();
	
private:
	string codigo;
	string nombre;
	string aula;
	Lista estudiantes;
	string horario;
	string dia;

};

