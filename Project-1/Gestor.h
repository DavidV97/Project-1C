#ifndef GESTOR_H
#define GESTOR_H

#include "ListaCursos.h"
#include "ListaEstudiantes.h"
#include "ListaEstXCurso.h"
#include "ListaCurXEstudiante.h"
#include <iostream>
#include <string>

using namespace std;

class Gestor{
public:
	 Gestor();
	 void addCurso(string nombre, string aula, string horario, string dia);
	 void addEstudiante(string pNombre);
	 void buscarCurso(string pcodigo);
	 bool verificarSiHayCursos();
	 bool verificarSiHayEstudiantes();
	 bool verificarSiEsVacio(string pdato);
	 string mostrarEstudiantes();


	 string buscarInfoEstudiante(string pCodigo);
	 string mostrarCursos();
	 string buscarInfoCurso(string pcodigo);
	 string matricular(string pCodigoCurso, string pCodigoEst);
	 string showEstXCurso(string pCodigoCurso);
	 string showCurXEstudiante(string pCodigoEstudiante);
	 string agregarEstudiante(string pNombreEstudiante);
	 string generateStrMatricula(Curso curso, Estudiante estudiante);
private :
	 Curso curso = Curso::Curso();
	 Estudiante estudiante = Estudiante::Estudiante();
	 ListaCursos listaCursos;
	 ListaEstudiantes listaEstudiantes;

	
};

#endif // !GESTOR_H