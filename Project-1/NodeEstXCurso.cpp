#include "NodeEstXCurso.h"

NodeEstXCurso::NodeEstXCurso(Estudiante* pEstudiante) {
	setEstudiante(pEstudiante);
}

void NodeEstXCurso::setSig(NodeEstXCurso *psig) {
	sig = psig;
}

<<<<<<< HEAD
NodeEstXCurso * NodeEstXCurso::getSig() {
	return sig;
=======
NodeEstXCurso::NodeEstXCurso(){
>>>>>>> f6c31c864eb4d1c396e02a4a3dde71a986ab8c07
}

void NodeEstXCurso::setEstudiante(Estudiante* pEstudiante) {

<<<<<<< HEAD
	estudiante = pEstudiante;
=======
NodeEstXCurso::~NodeEstXCurso(){
>>>>>>> f6c31c864eb4d1c396e02a4a3dde71a986ab8c07
}

Estudiante* NodeEstXCurso::getEstudiante(void) {

	return estudiante;
}