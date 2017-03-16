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

void NodeEstXCurso::setNota(int pNota){
	nota = pNota;
}

int NodeEstXCurso::getNota(){
	return nota;
}

void NodeEstXCurso::setEstado(){
	if (nota >= 70) {
		estado = "aprobado";
	}else if (nota >= 60) {
		estado = "aplazado";
	}else {
		estado = "reprobado";
	}
}

string NodeEstXCurso::getEstado(){
	return estado;
}

void NodeEstXCurso::setEstudiante(Estudiante* pEstudiante) {
		estudiante = pEstudiante;
}

Estudiante* NodeEstXCurso::getEstudiante(void) {
	return estudiante;
}

string NodeEstXCurso::getDato(void){
	std::string sNota = to_string(nota);
	string result = estudiante->toString();
	result += sNota + "\n";
	result += estado + "\n";
	return result;
}

string NodeEstXCurso::getCodigoEst(){
	string result = estudiante->getCodigo();
	return result;
}
