#ifndef GESTOR_H
#define GESTOR_H

#include "ListaCursos.h"
#include "ListaEstudiantes.h"
#include "ListaEstXCurso.h"
#include "NodeCurso.h"
#include <iostream>
#include <string>

using namespace std;

class Gestor{
public:
	 Gestor();
	 void addCurso(string codigo, string nombre, string aula, string horario, string dia);
	 string mostrarCursos();
	 string buscarInfoCurso(string pcodigo);
	 void buscarCurso(string pcodigo);
	 bool verificarSiHayCursos();
	 string mostrarEstudiantes();
	 string matricular(string pCodigoCurso, string pCodigoEst);
	 string agregarEstudiante(string pNombreEstudiante);
	 
private :
	 Curso curso = Curso::Curso();
	 ListaCursos listaCursos;
	 ListaEstudiantes listaEstudiantes;
	 string generateStrMatricula(Curso curso, Estudiante estudiante);
};

#endif // !GESTOR_H