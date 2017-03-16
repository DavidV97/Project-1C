#ifndef GESTOR_H
#define GESTOR_H

#include "ListaCursos.h"
#include "ListaEstudiantes.h"
#include "NodeCurso.h"
#include <iostream>
#include <string>

using namespace std;

class Gestor{
public:
	 Gestor();
	 void addCurso(string codigo, string nombre, string aula, string horario, string dia);
	 string mostrarCursos();
	 Estudiante mostrarEstudiantes();
private :
	 Curso curso = Curso::Curso();
	 ListaCursos listaCursos = ListaCursos::ListaCursos();
	 ListaEstudiantes listaEsrudiantes;
};

#endif // !GESTOR_H