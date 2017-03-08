#include "Lista.h"

#include <string> 
#include <iostream>
using namespace std;

Lista::Lista(string name) {

	longitud = 0;
	head = NULL;
	nombre = name;
}

void Lista::setLongitud() {

	longitud++;
}

int Lista::getLength() const {

	return longitud;
}

void Lista::setHead(Node *phead) {

	head = phead;
}

Node * Lista::getHead() const {

	return head;
}

void Lista::setNombre(string name) {

	nombre = name;
}

string Lista::getNombre() {

	return this->nombre;
}

void Lista::setTipo(string pTipo) {

	tipo = pTipo;
}

string Lista::getTipo() {

	return this->tipo;
}

void Lista::addEstudiante(Estudiante pestudiante) {

	Node* node = new Node(pestudiante);
	setTipo("estudiante");

	if (this->head == NULL) {
		setHead(node);
	}
	else {
		node->setSig(head);
		setHead(node);
	}

	this->setLongitud();
}

void Lista::addCurso(Curso pcurso) {

	Node* node = new Node(pcurso);
	setTipo("curso");

	if (this->head == NULL) {
		setHead(node);
	}
	else {
		node->setSig(head);
		setHead(node);
	}

	this->setLongitud();
}

string Lista::mostrarLista() {

	Node* aux;
	aux = head;
	string result;
	std::string sDato;

	result = getNombre() + " \n";

	if (aux != NULL) {

		while (aux != NULL) {

			if (getTipo() == "estudiante"){
				sDato = std::to_string(aux->getEstudiantes());
			}
			else {
				sDato = std::to_string(aux->getDato());
			}

			result += sDato + "\n";
			aux = aux->getSig();
		}

	}
	else {
		result = "Lista vacia";
	}

	return result;
}

string Lista::buscarDato(int pdato) {

	Node* aux;
	aux = head;
	string result;

	result = getNombre() + " \n";

	if (aux != NULL) {

		ordenarLista();

		for (int i = 0; aux != NULL; i++) {

			if (aux->getDato() == pdato) {

				result = "";

			}
			else {
				result = "";
			}
			aux = aux->getSig();
		}

	}
	else {
		result = "Lista vacia";
	}

	return result;
}

void Lista::ordenarLista() {


}

void Lista::buscarDato() {


}
