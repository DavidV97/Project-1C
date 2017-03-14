#ifndef GESTOR_H
#define GESTOR_H

#include "ListaCursos.h"
#include "ListaEstudiantes.h"
#include <iostream>
#include <string>

using namespace std;

class Gestor
{
public:
	Gestor();
	static void addCurso(string codigo, string nombre, string aula, string horario, string dia);
};

#endif // !GESTOR_H

