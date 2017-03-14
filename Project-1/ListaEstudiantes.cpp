#include "ListaEstudiantes.h"

ListaEstudiantes::ListaEstudiantes():Lista(){
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