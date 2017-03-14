#include "NodeEstudiante.h"

NodeEstudiante::NodeEstudiante(Estudiante pEstudiante){
	setEstudiante(pEstudiante);
}

void NodeEstudiante::setEstudiante(Estudiante pestudiante) {

	estudiante = pestudiante;
}

string NodeEstudiante::getEstudiante(void) {

	return estudiante.getNomEstudiante();
}