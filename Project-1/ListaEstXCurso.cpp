#include "ListaEstXCurso.h"

ListaEstXCurso::ListaEstXCurso() {
	this->length = 0;
	this->head = NULL;
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

NodeEstXCurso * ListaEstXCurso::getHead() const{
	return this->head;
}

void ListaEstXCurso::addMatricula(Estudiante pEst, Curso pCur) {

	NodeEstXCurso* node = new NodeEstXCurso(pEst, pCur);

	if (estXCurVacio()) {
		this->setHead(node);
	}else {
		node->setSig(head);
		this->setHead(node);
	}
	this->setLength();
}

bool ListaEstXCurso::estXCurVacio() {
	if (this->head == NULL) {
		return true;
	}
	return false;
}

string ListaEstXCurso::showListEstXCurso(Curso pCur){
	string result;
	NodeEstXCurso* aux;
	aux = this->head;
	if (aux != NULL) {
		while (aux != NULL) {
			if (aux->getCodigoCur() == pCur.getCodigo()) {
				result += aux->getDatoEst() + "\n";
			}
			aux = aux->getSig();
		}
	}else {
		result = "No hay estudiantes matriculados";
	}
	return result;
}

string ListaEstXCurso::showListCurXEst(Estudiante pEst) {
	string result;
	NodeEstXCurso* aux;
	aux = this->head;
	if (aux != NULL) {
		while (aux != NULL) {
			if (aux->getCodigoEst() == pEst.getCodigo()) {
				result += aux->getDatoCur() + "\n";
			}
			aux = aux->getSig();
		}
	}
	else {
		result = "No hay cursos matriculados";
	}
	return result;
}

Estudiante ListaEstXCurso::searchEstudiante(string pCodigo){
	NodeEstXCurso* aux;
	aux = head;
	Estudiante estudiante = aux->getEstudiante();
	Estudiante estEncontrado = NULL;
	string codigo = aux->getCodigoEst();
	while (aux != NULL) {
		if (toUppercase(codigo) == toUppercase(pCodigo)) {
			estEncontrado = aux->getEstudiante();
			aux = NULL;
		}else {
			aux = aux->getSig();
			if (aux != NULL) {
				estudiante = aux->getEstudiante();
				codigo = aux->getCodigoEst();
			}
		}
	}
	return estEncontrado;
}

Curso ListaEstXCurso::searchCurso(string pCodigo) {
	NodeEstXCurso* aux;
	aux = head;
	Curso curso = aux->getCurso();
	Curso curEncontrado;
	string codigo = aux->getCodigoCur();
	while (aux != NULL) {
		if (toUppercase(codigo) == toUppercase(pCodigo)) {
			curEncontrado = aux->getCurso();
			aux = NULL;
		}
		else {
			aux = aux->getSig();
			if (aux != NULL) {
				curso = aux->getCurso();
				string codigo = aux->getCodigoCur();
			}
		}
	}
	return curEncontrado;
}

bool ListaEstXCurso::seEncuentraEst(string pcodigo) {
	bool resul = false;
	NodeEstXCurso* aux;
	aux = head;
	Estudiante estudiante = aux->getEstudiante();
	Estudiante estEncontrado;
	string codigo = aux->getCodigoEst();
	while (aux != NULL) {
		if (toUppercase(codigo) == toUppercase(pcodigo)) {
			aux = NULL;
			return true;
		}
		else {
			aux = aux->getSig();
			if (aux != NULL) {
				estudiante = aux->getEstudiante();
				codigo = aux->getCodigoEst();
			}
		}
	}
	return resul;
}

bool ListaEstXCurso::seEncuentraCur(string pcodigo) {
	bool resul = false;
	NodeEstXCurso* aux;
	aux = head;
	Curso curso = aux->getCurso();
	Curso curEncontrado;
	string codigo = aux->getCodigoCur();
	while (aux != NULL) {
		if (toUppercase(codigo) == toUppercase(pcodigo)) {
			aux = NULL;
			return true;
		}
		else {
			aux = aux->getSig();
			if (aux != NULL) {
				curso = aux->getCurso();
				codigo = aux->getCodigoCur();
			}
		}
	}
	return resul;
}

bool ListaEstXCurso::ifEncuentraEstudiante(Estudiante pEst, Curso pCur) {
	bool result = false;
	NodeEstXCurso* aux;
	aux = this->head;

	while (aux != NULL) {
		if (aux->getCodigoEst() == pEst.getCodigo()) {
			if (aux->getCodigoCur() == pCur.getCodigo()) {
				return true;
			}
		}
		aux = aux->getSig();
	}
	return result;
}

string ListaEstXCurso::califEstudiante(Estudiante pEst, Curso pCur,int pNota){
	string result;
	NodeEstXCurso* aux;
	aux = this->head;

	while (aux != NULL) {
		if (aux->getCodigoEst() == pEst.getCodigo()) {
			if (aux->getCodigoCur() == pCur.getCodigo()) {
				aux->setNota(pNota);
				aux->setEstado();
				result = "Nota agregada satisfactoriamente";
			}
		}
		aux = aux->getSig();
	}
	return result;
}

string ListaEstXCurso::toUppercase(string pcodigo) {
	std::transform(pcodigo.begin(), pcodigo.end(), pcodigo.begin(), ::toupper);
	return pcodigo;
}