#include "Node.h"

Node::Node(Estudiante estudiante) {

	setEstudiante(estudiante);
	sig = NULL;
}

Node::Node(Curso curso) {

	setCurso(curso);
	sig = NULL;
}

void Node::setSig(Node *psig) {

	sig = psig;
}

Node * Node::getSig() {

	return sig;
}

void Node::setEstudiante(Estudiante pestudiante) {

	estudiante = pestudiante;
}

string Node::getEstudiante(void) {

	return estudiante.getNomEstudiante();
}

void Node::setCurso(Curso pcurso) {

	curso = pcurso;
}

string Node::getCurso(void) {

	return curso.getNomCurso();
}
