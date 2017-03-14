#include "ListaCursos.h"

ListaCursos::ListaCursos():Lista(){
}

void ListaCursos::addCurso(Curso pcurso) {

	NodeCurso* node = new NodeCurso(pcurso);

	if (this->head == NULL) {
		setHead(node);
	}
	else {
		node->setSig(head);
		setHead(node);
	}

	this->setLongitud();
}