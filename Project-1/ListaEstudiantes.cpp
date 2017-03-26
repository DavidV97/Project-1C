#include "ListaEstudiantes.h"

ListaEstudiantes::ListaEstudiantes(){
	longitud = 0;
	head = NULL;
}

void ListaEstudiantes::setLongitud() {
	longitud++;
}

int ListaEstudiantes::getLongitud() const {
	return this->longitud;
}

void ListaEstudiantes::setHead(NodeEstudiante *phead) {
	head = phead;
}

NodeEstudiante * ListaEstudiantes::getHead() const {
	return head;
}

void ListaEstudiantes::addEstudiante(Estudiante pEstudiante) {

	NodeEstudiante* node = new NodeEstudiante(pEstudiante);

	if (estudianteVacio()) {
		setHead(node);
	}
	else {
		node->setSig(head);
		setHead(node);
	}
	this->setLongitud();
}

bool ListaEstudiantes::estudianteVacio() {
	if (this->head == NULL) {
		return true;
	}
	return false;
}

string ListaEstudiantes::mostrarEstudiantes() {
	string resul = "";
	NodeEstudiante* auxEstudiante;
	auxEstudiante = this->head;
	while (auxEstudiante != NULL) {
		resul += auxEstudiante->toString() + "\n";
		auxEstudiante = auxEstudiante->getSig();
	}
	return resul;
}
string ListaEstudiantes::buscarInfoDelEstudiante(string pcodigo) {
	string resul;
	NodeEstudiante* auxEstudiante;
	auxEstudiante = head;
	Estudiante estudiante = auxEstudiante->getEstudiante();
	string codigo = estudiante.getCodigo();
	while (auxEstudiante != NULL) {
		if (toUppercase(codigo) == toUppercase(pcodigo)) {
			resul = "El curso se encontro sastisfactoriamente \n " + auxEstudiante->toString() + "\n";
			auxEstudiante = NULL;
		}else {
			resul = "El curso que busco no se encuentra registrado!";
			auxEstudiante = auxEstudiante->getSig();
			if (auxEstudiante != NULL) {
				estudiante = auxEstudiante->getEstudiante();
				codigo = estudiante.getCodigo();
			}
		}
	}
	return resul;
}
Estudiante ListaEstudiantes::buscarEstudiante(string pcodigo) {
	NodeEstudiante* auxEstudiante;
	auxEstudiante = head;
	Estudiante estudiante = auxEstudiante->getEstudiante();
	Estudiante estudianteEncontrado;
	string codigo = estudiante.getCodigo();
	while (auxEstudiante != NULL) {
		if (toUppercase(codigo) == toUppercase(pcodigo)) {
			estudianteEncontrado = auxEstudiante->getEstudiante();
			auxEstudiante = NULL;
		}else {
			auxEstudiante = auxEstudiante->getSig();
			if (auxEstudiante != NULL) {
				estudiante = auxEstudiante->getEstudiante();
				codigo = estudiante.getCodigo();
			}
		}
	}

	return estudianteEncontrado;
}
bool ListaEstudiantes::seEncuentraEstudiante(string pcodigo) {
	bool resul = false;
	NodeEstudiante* auxEstudiante;
	auxEstudiante = head;
	Estudiante estudiante = auxEstudiante->getEstudiante();
	Estudiante estudianteEncontrado;
	string codigo = estudiante.getCodigo();
	while (auxEstudiante != NULL) {
		if (toUppercase(codigo) == toUppercase(pcodigo)) {
			auxEstudiante = NULL;
			return true;
		}else {
			auxEstudiante = auxEstudiante->getSig();
			if (auxEstudiante != NULL) {
				estudiante = auxEstudiante->getEstudiante();
				codigo = estudiante.getCodigo();
			}
		}
	}
	return resul;
}

string ListaEstudiantes::toUppercase(string pcodigo) {
	std::transform(pcodigo.begin(), pcodigo.end(), pcodigo.begin(), ::toupper);
	return pcodigo;
}