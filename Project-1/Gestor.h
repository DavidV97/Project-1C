#ifndef GESTOR_H
#define GESTOR_H
#include "ListaCursos.h"
#include "ListaEstudiantes.h"
#include "ListaEstXCurso.h"
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
	 string mostrarEstudiantes();

	 string buscarInfoEstudiante(string pCodigo);
	 string mostrarCursos();
	 string buscarInfoCurso(string pcodigo);
	 string matricular(string pCodigoCurso, string pCodigoEst);
	 string showEstXCurso(string pCodigoCurso);
	 string showCurXEstudiante(string pCodigoEstudiante);
	 
private :
	 //Curso curso = Curso::Curso();
	 //Estudiante estudiante = Estudiante::Estudiante();
	 //ListaEstXCurso estXCurso;
	 ListaCursos listaCursos;
	 ListaEstudiantes listaEstudiantes;
	 string generateStrMatricula(Curso curso, Estudiante estudiante);
	 ListaEstXCurso* Gestor::getIListaEXC();
};

#endif // !GESTOR_H