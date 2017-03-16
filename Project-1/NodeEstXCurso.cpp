#include "NodeEstXCurso.h"

NodeEstXCurso::NodeEstXCurso(Estudiante* pEstudiante) {
	setEstudiante(pEstudiante);
}

void NodeEstXCurso::setSig(NodeEstXCurso *psig) {
	sig = psig;
}

NodeEstXCurso * NodeEstXCurso::getSig() {
	return sig;
}

void NodeEstXCurso::setEstudiante(Estudiante* pEstudiante) {

	estudiante = pEstudiante;
}

Estudiante* NodeEstXCurso::getEstudiante(void) {

	return estudiante;
}