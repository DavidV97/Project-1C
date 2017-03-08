#include "Node.h"
//#include "Estudiante.h"
#include <sstream>

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

Estudiante Node::getEstudiantes(void) {

	return estudiante;
}

void Node::setCurso(Curso pcurso) {

	curso = pcurso;
}

Curso Node::getCurso(void) {

	return curso;
}
