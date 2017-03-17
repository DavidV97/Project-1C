#include "ListaCurXEstudiante.h"

ListaCurXEstudiante::ListaCurXEstudiante() {
	length = 0;
	head = NULL;
}

void ListaCurXEstudiante::setLongitud() {
	length++;
}

int ListaCurXEstudiante::getLongitud() {
	return length;
}

void ListaCurXEstudiante::setHeadd(NodeCurXEstudiante *phead) {
	head = phead;
}

NodeCurXEstudiante * ListaCurXEstudiante::getHeadd() {
	return head;
}

void ListaCurXEstudiante::addCurso(Curso* pCurso) {

	NodeCurXEstudiante* node = new NodeCurXEstudiante(pCurso);

	if (this->head == NULL) {
		setHeadd(node);
	}
	else {
		node->setSig(head);
		setHeadd(node);
	}

	this->setLongitud();
}

string ListaCurXEstudiante::showListCurXEstudiante() {
	NodeCurXEstudiante* aux;
	aux = head;

	string result;

	if (aux != NULL) {

		while (aux != NULL) {

			result += aux->getDato() + "\n";
			aux = aux->getSig();
		}
	}
	else {
		result = "No hay cursos matriculados";
	}

	return result;
}

string ListaCurXEstudiante::searchCurso(string pCodigo) {
	NodeCurXEstudiante* aux;
	aux = head;

	string result;

	if (aux != NULL) {

		while (aux != NULL) {

			if (aux->getCodigoCur() == pCodigo) {
				result = aux->getDato() + "\n";
				aux = NULL;
			}
			else {
				aux = aux->getSig();
			}

		}
		if (empty(result)) {
			result = "El codigo digitado no corresponde a ningun curso del estudiante";
		}
	}
	else {
		result = "No hay cursos matriculados";
	}

	return result;
}

string ListaCurXEstudiante::delCurso(string pCodigo) {
	string result = "";
	NodeCurXEstudiante * aux;
	NodeCurXEstudiante * auxAnterior;
	NodeCurXEstudiante * auxBorrar;
	NodeCurXEstudiante * sustituirNodo;
	aux = head;
	sustituirNodo = aux = head;

	if (head != NULL) {

		auxAnterior = aux->getSig();

		if (aux->getCodigoCur() == pCodigo) {
			setHeadd(auxAnterior);
			delete aux;
			aux = NULL;
		}
		while (aux != NULL) {

			if (aux->getCodigoCur() == pCodigo) {
				result = "El curso se elimino sastifactoriamente del estudiante";
				if (auxAnterior->getSig() != NULL) {
					auxAnterior->setSig(aux->getSig());
				}
				delete aux;
				break;
			}
			else {
				result = "El codigo digitado no corresponde a ningun curso del estudiante";
				auxAnterior = aux;
				aux = aux->getSig();
			}
		}
	}
	else {
		result = "No hay cursos matriculados";
	}
	return result;
}