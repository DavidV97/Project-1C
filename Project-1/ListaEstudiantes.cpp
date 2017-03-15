#include "ListaEstudiantes.h"

ListaEstudiantes::ListaEstudiantes(){
	longitud = 0;
	head = NULL;
}

void ListaEstudiantes::setLongitud() {
	longitud++;
}

int ListaEstudiantes::getLength() const {
	return longitud;
}

void ListaEstudiantes::setHead(NodeEstudiante *phead) {
	head = phead;
}

NodeEstudiante * ListaEstudiantes::getHead() const {
	return head;
}

void ListaEstudiantes::addEstudiante(Estudiante pestudiante) {

	NodeEstudiante* node = new NodeEstudiante(pestudiante);

	if (this->head == NULL) {
		setHead(node);
	}
	else {
		node->setSig(head);
		setHead(node);
	}

	this->setLongitud();
}