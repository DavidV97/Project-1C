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
	 string mostrarEstudiantes();
	 string matricular(string pCodigoCurso, string pCodigoEst);
private :
	 Curso curso = Curso::Curso();
	 ListaCursos listaCursos;
	 ListaEstudiantes listaEstudiantes;
};

#endif // !GESTOR_H