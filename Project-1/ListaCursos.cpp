#include "ListaCursos.h"
#include "NodeCurso.h"
#include <sstream>
#include <iostream>
using namespace std;

ListaCursos::ListaCursos(){
	longitud = 0;
	head = NULL;
}

void ListaCursos::setLongitud() {
	longitud++;
}

int ListaCursos::getLength() const {
	return longitud;
}

void ListaCursos::setHead(NodeCurso *phead) {
	head = phead;
}

NodeCurso * ListaCursos::getHead() const {
	return head;
}

void ListaCursos::addCurso(Curso pcurso) {

	NodeCurso* node = new NodeCurso(pcurso);

	if (cursoVacio()) {
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
string ListaCursos::mostrarCursos() {
	string resul = "";
	NodeCurso* auxCurso;
	auxCurso = this->head;
	if (cursoVacio()) {
		resul = "No hay cursos agregados, por favor ve y crea uno";
	}else {
		while (auxCurso != NULL) {
			resul += auxCurso->toString();
			auxCurso = auxCurso->getSig();
		}
	}
	return resul;
}