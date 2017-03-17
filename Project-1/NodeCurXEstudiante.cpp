#include "NodeCurXEstudiante.h"

NodeCurXEstudiante::NodeCurXEstudiante(Curso* pCurso) {
	setCurso(pCurso);
}

void NodeCurXEstudiante::setSig(NodeCurXEstudiante *psig) {
	sig = psig;
}

NodeCurXEstudiante * NodeCurXEstudiante::getSig() {
	return sig;
}

void NodeCurXEstudiante::setCurso(Curso* pCurso) {
	curso = pCurso;
}

Curso* NodeCurXEstudiante::getCurso() {
	return curso;
}

string NodeCurXEstudiante::getDato() {
	string result = curso->toString();
	return result;
}

string NodeCurXEstudiante::getCodigoCur() {
	string result = curso->getCodigo();
	return result;
}