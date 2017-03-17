#include "ListaCursos.h"
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
	while (auxCurso != NULL) {
		resul += auxCurso->toString() + "\n";
		auxCurso = auxCurso->getSig();
	}
	return resul;
}
string ListaCursos::buscarInfoDelCurso(string pcodigo) {
	string resul;
	NodeCurso* auxCurso;
	auxCurso = head;
	Curso curso = auxCurso->getCurso();
	while (auxCurso != NULL) {
		if (curso.getCodigo() == pcodigo) {
			resul = "El curso se encontro sastisfactoriamente \n " + auxCurso->toString() + "\n";
			auxCurso = NULL;
		}
		else {
			resul = "El curso que busco no se encuentra registrado!";
			auxCurso = auxCurso->getSig();
			if (auxCurso != NULL) {
				curso = auxCurso->getCurso();
			}
			
		}
			
	}

	return resul;
}
Curso ListaCursos::buscarCurso(string pcodigo) {
	NodeCurso* auxCurso;
	auxCurso = head;
	Curso curso = auxCurso->getCurso();
	Curso cursoEncontrado;
	while (auxCurso != NULL) {
		if (curso.getCodigo() == pcodigo) {
			cursoEncontrado = auxCurso->getCurso();
			auxCurso = NULL;
		}
		else {
			auxCurso = auxCurso->getSig();
			if (auxCurso != NULL) {
				curso = auxCurso->getCurso();
			}

		}

	}

	return cursoEncontrado;

}
bool ListaCursos::seEncuentraCurso(string pcodigo) {
	bool resul = false;
	NodeCurso* auxCurso;
	auxCurso = head;
	Curso curso = auxCurso->getCurso();
	Curso cursoEncontrado;
	while (auxCurso != NULL) {
		if (curso.getCodigo() == pcodigo) {
			auxCurso = NULL;
			return true;
			
		}
		else {
			auxCurso = auxCurso->getSig();
			if (auxCurso != NULL) {
				curso = auxCurso->getCurso();
			}

		}

	}
	return resul;
}