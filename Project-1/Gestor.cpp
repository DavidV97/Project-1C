#include "Gestor.h"

Gestor::Gestor(){}

void Gestor::addCurso(string nombre, string aula, string horario, string dia) {
	Curso curso(nombre, aula, horario,dia);
	listaCursos.addCurso(curso);
}

void Gestor::addEstudiante(string pNombre) {
	Estudiante estudiante(pNombre);
	listaEstudiantes.addEstudiante(estudiante);
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

bool Gestor::verificarSiHayEstudiantes() {
	return listaEstudiantes.estudianteVacio();
}

string Gestor::mostrarEstudiantes() {
	return listaEstudiantes.mostrarEstudiantes();
}

string Gestor::buscarInfoEstudiante(string pCodigo) {
	return listaEstudiantes.buscarInfoDelEstudiante(pCodigo);
}

string Gestor::matricular(string pCodigoCurso, string pCodigoEst){
	string result;
	if (listaCursos.seEncuentraCurso(pCodigoCurso)) {
		Curso curso = listaCursos.buscarCurso(pCodigoCurso);
		ListaEstXCurso estXCurso = curso.getEstudiantes();
		Estudiante estudiante = listaEstudiantes.buscarEstudiante(pCodigoEst);
		estXCurso.addEstudiante(&estudiante);
		//ListaCurXEstudiante& curXEstudiantes = estudiante.getCursos();
		//Curso *PtrCur = &curso;
		//curXEstudiantes.addCurso(PtrCur);
		
		result = generateStrMatricula(curso, estudiante);

	}else {
		result = "El codigo digitado no corresponde a ningun curso";
	}
	
	return result;
}

string Gestor::showEstXCurso(string pCodigoCurso){
	string result;
	if (listaCursos.seEncuentraCurso(pCodigoCurso)) {
		Curso curso = listaCursos.buscarCurso(pCodigoCurso);

		ListaEstXCurso estXCurso = curso.getEstudiantes();

		result = "Codigo: " + curso.getCodigo() + "\n";
		result += "Nombre: "+ curso.getNomCurso() + "\n";
		result += "Estudiantes del curso: \n";
		result += estXCurso.showListEstXCurso();
	}else {
		result = "El codigo digitado no corresponde a ningun curso";
	}
	return result;
}

string Gestor::showCurXEstudiante(string pCodigoEstudiante) {
	string result;
	if (listaEstudiantes.seEncuentraEstudiante(pCodigoEstudiante)) {
		Estudiante estudiante = listaEstudiantes.buscarEstudiante(pCodigoEstudiante);
		ListaCurXEstudiante &curXEstudiante = estudiante.getCursos();
		result = estudiante.getCodigo() + "\n" + estudiante.getNomEstudiante() + "\n";
		result += "Cursos del estudiante: \n";
		result += curXEstudiante.showListCurXEstudiante();
	}else {
		result = "El codigo digitado no corresponde a ningun estudiante";
	}
	return result;
}

string Gestor::generateStrMatricula(Curso curso, Estudiante estudiante) {
	string result;
	result = "**Matricula exitosa **\n";
	result += "-Detalles del curso: \n";
	result += curso.toString();
	result += "-Detalles del estudiante: \n";
	result += estudiante.toString();
	return result;
}

string Gestor::agregarEstudiante(string pestudiante) {



	return NULL;
}
