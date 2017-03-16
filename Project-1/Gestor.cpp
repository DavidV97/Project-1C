#include "Gestor.h"
#include "Curso.h"
#include "ListaCursos.h"
using namespace std;
Gestor::Gestor(){
	
}

void Gestor::addCurso(string codigo, string nombre, string aula, string horario, string dia) {
	Curso curso(codigo, nombre, aula, horario,dia);
	listaCursos.addCurso(curso);
}
string Gestor::mostrarCursos() {
	
	return listaCursos.mostrarCurso();
}



