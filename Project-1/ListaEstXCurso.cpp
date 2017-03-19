#include "ListaEstXCurso.h"

ListaEstXCurso::ListaEstXCurso() {
	length = 0;
	head = NULL;
}

void ListaEstXCurso::setLength() {
	length++;
}

int ListaEstXCurso::getLength() {
	return this->length;
}

void ListaEstXCurso::setHead(NodeEstXCurso *phead) {
	head = phead;
}

NodeEstXCurso * ListaEstXCurso::getHead() {
	return this->head;
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

	this->setLength();
}

string ListaEstXCurso::showListEstXCurso(){
	string result;

	NodeEstXCurso* aux;
	aux = this->head;

	if (aux != NULL) {

		while (aux != NULL) {

			result += aux->getDato() + "\n";
			aux = aux->getSig();
		}
	}else {
		result = "No hay estudiantes registrados en este curso";

	}

	return result;
}

Estudiante* ListaEstXCurso::searchEstudiante(string pCodigo){
	NodeEstXCurso* aux;
	aux = head;

	while (aux != NULL) {
		if (aux->getCodigoEst() == pCodigo) {
			Estudiante* estudiante = aux->getEstudiante();
			aux = NULL;
			return estudiante;
		}else {
			aux = aux->getSig();
		}
	}
	return NULL;
}

string ListaEstXCurso::delEstudiante(string pCodigo){
	string result = "";
	NodeEstXCurso * aux;
	NodeEstXCurso * auxAnterior;
	NodeEstXCurso * auxBorrar;
	NodeEstXCurso * sustituirNodo;
	aux = head;
	sustituirNodo = aux = head;
	
	if (head != NULL) {

		auxAnterior = aux->getSig();

		if (aux->getCodigoEst() == pCodigo) {
			setHead(auxAnterior);
			delete aux;
			aux = NULL;
		}
		while (aux != NULL) {

			if (aux->getCodigoEst() == pCodigo) {
				result = "El estudiante se elimino sastifactoriamente del curso";
				if (auxAnterior->getSig() != NULL) {
					auxAnterior->setSig(aux->getSig());
				}
				delete aux;
				break;
			}else {
				result = "El codigo digitado no corresponde a ningun estudiante del curso";
				auxAnterior = aux;
				aux = aux->getSig();
			}
		}
	}
	else {
		result = "No hay estudiantes registrados en este curso";
	}
	return result;
}
