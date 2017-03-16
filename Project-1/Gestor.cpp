#include "Gestor.h"

Gestor::Gestor(){
}

void Gestor::addCurso(string codigo, string nombre, string aula, string horario, string dia) {
	Curso curso(codigo, nombre, aula, horario,dia);
}

Curso Gestor::mostrarCursos() {
	listaCurso.mostrarCurso();
}

Estudiante Gestor::mostrarEstudiantes() {
	listaEsrudiantes.getLength();
}
