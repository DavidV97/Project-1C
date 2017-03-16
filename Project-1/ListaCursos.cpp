#include "ListaCursos.h"
#include "NodeCurso.h"

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
string ListaCursos::mostrarCursos() {
	string resul = "";
	NodeCurso* auxCurso;
	auxCurso = head;
	if (cursoVacio() == NULL) {
		resul = "No hay cursos agregados, por favor ve y crea uno";
	}else {
		/*while (auxCurso != NULL) {
			resul += 
		}*/
	}
	return resul;
}