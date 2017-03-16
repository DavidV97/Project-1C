#include "Gestor.h"

Gestor::Gestor(){}

void Gestor::addCurso(string codigo, string nombre, string aula, string horario, string dia) {
	Curso curso(codigo, nombre, aula, horario,dia);
	listaCursos.addCurso(curso);
}

string Gestor::mostrarCursos() {
	return listaCursos.mostrarCursos();
}
string Gestor::buscarInfoCurso(string pcodigo) {
	return listaCursos.buscarInfoDelCurso(pcodigo);
}
void Gestor::buscarCurso(string pcodigo) {
	bool resul = listaCursos.seEncuentraCurso(pcodigo);
	if (resul) {
		Curso curso = listaCursos.buscarCurso(pcodigo);
	}
	
}
bool Gestor::verificarSiHayCursos() {
	return listaCursos.cursoVacio();
}

string Gestor::mostrarEstudiantes() {
	//listaEstudiantes.mostrarEstudiantes();
	return string();
}

string Gestor::matricular(string pCodigoCurso, string pCodigoEst){
	//Curso curso = listaCursos.buscarCurso();
	//ListaEstXCurso estXCurso = curso.getEstudiantes();
	//Estudiante estudiante = listaEstudiantes.buscarEstudiante();
	//Estudiante *PtrEst = &estudiente;
	//estXCurso.addEstudiante(*PtrEst);
	
	return string();
}

string Gestor::agregarEstudiante(string pestudiante) {



	return NULL;
}

