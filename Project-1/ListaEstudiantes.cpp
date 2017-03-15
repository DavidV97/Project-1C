#include "ListaEstudiantes.h"

ListaEstudiantes::ListaEstudiantes(){
	longitud = 0;
	cabeza = NULL;
}

void ListaEstudiantes::setLongitud() {
	longitud++;
}

int ListaEstudiantes::getLongitud() const {
	return this->longitud;
}

void ListaEstudiantes::setCabeza(NodeEstudiante *phead) {
	cabeza = phead;
}

NodeEstudiante * ListaEstudiantes::getCabeza() const {
	return cabeza;
}

void ListaEstudiantes::agregarEstudiante(Estudiante pestudiante) {

	NodeEstudiante* node = new NodeEstudiante(pestudiante);

	if (this->cabeza == NULL) {
		setCabeza(node);
	
	}

	else {
		node->setSig(cabeza);
		setCabeza(node);
	}

	this->setLongitud();
}