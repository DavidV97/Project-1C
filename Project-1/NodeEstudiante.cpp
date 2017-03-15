#include "NodeEstudiante.h"

NodeEstudiante::NodeEstudiante(Estudiante pEstudiante){
	setEstudiante(pEstudiante);
}

void NodeEstudiante::setSig(NodeEstudiante *psig) {
	sig = psig;
}

NodeEstudiante * NodeEstudiante::getSig() {
	return sig;
}

void NodeEstudiante::setEstudiante(Estudiante pEstudiante) {

	estudiante = pEstudiante;
}

Estudiante NodeEstudiante::getEstudiante(void) {

	return estudiante;
}