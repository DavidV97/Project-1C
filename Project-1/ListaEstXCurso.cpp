#include "ListaEstXCurso.h"

ListaEstXCurso::ListaEstXCurso() {
	longitud = 0;
	head = NULL;
}

void ListaEstXCurso::setLongitud() {
	longitud++;
}

int ListaEstXCurso::getLength() const {
	return longitud;
}

void ListaEstXCurso::setHead(NodeEstXCurso *phead) {
	head = phead;
}

NodeEstXCurso * ListaEstXCurso::getHead() const {
	return head;
}

void ListaEstXCurso::addEstudiante(Estudiante* pestudiante) {

	NodeEstXCurso* node = new NodeEstXCurso(pestudiante);

	if (this->head == NULL) {
		setHead(node);
	}
	else {
		node->setSig(head);
		setHead(node);
	}

	this->setLongitud();
}