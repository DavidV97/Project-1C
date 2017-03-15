#include "ListaCursos.h"
#include "NodeCurso.h"

ListaCursos::ListaCursos():Lista(){
}

void ListaCursos::addCurso(Curso pcurso) {

	NodeCurso* node = new NodeCurso(pcurso);

	if (cursoVacio() == NULL) {
		setHead(node);
	}
	else {
		node->setSig(head);
		setHead(node);
	}

	this->setLongitud();
}
bool ListaCursos::cursoVacio() {
	if (this->head == NULL) {
		return true;
	}
	return false;
}
string ListaCursos::mostrarCurso() {
	string resul = "";
	NodeCurso* auxCurso;
	auxCurso = Lista::head;
	if (cursoVacio() == NULL) {
		resul = "No hay cursos agregados, por favor ve y crea uno";
	}else {
		while (aux != NULL) {
			resul += 
		}
	}
}