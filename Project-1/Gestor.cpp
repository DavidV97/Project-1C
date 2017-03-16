#include "Gestor.h"

Gestor::Gestor(){}

void Gestor::addCurso(string codigo, string nombre, string aula, string horario, string dia) {
	Curso curso(codigo, nombre, aula, horario,dia);
	listaCursos.addCurso(curso);
}

string Gestor::mostrarCursos() {
	return listaCursos.mostrarCursos();
}

string Gestor::mostrarEstudiantes() {
	//listaEsrudiantes.getLength();
	return string();
}

string Gestor::matricular(string pCodigoCurso, string pCodigoEst){

	//Curso *PtrCurso = &curso;
	//Estudiante *PtrEst = &estudiente;
	return string();
}
