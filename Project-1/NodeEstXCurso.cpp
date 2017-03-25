#include "NodeEstXCurso.h"

NodeEstXCurso::NodeEstXCurso(Estudiante pEstudiante,Curso pCurso) {
	this->setCurso(pCurso);
	this->setEstudiante(pEstudiante);
	this->estado = "Sin calificar";
}

Curso NodeEstXCurso::getCurso(){
	return curso;
}

Estudiante NodeEstXCurso::getEstudiante() {
	return estudiante;
}

NodeEstXCurso * NodeEstXCurso::getSig() {
	return this->sig;
}

int NodeEstXCurso::getNota() {
	return this->nota;
}

string NodeEstXCurso::getEstado() {
	return estado;
}

void NodeEstXCurso::setCurso(Curso pCurso){
	this->curso = pCurso;
}

void NodeEstXCurso::setEstudiante(Estudiante pEstudiante){
	this->estudiante = pEstudiante;
}

void NodeEstXCurso::setNota(int pNota){
	nota = pNota;
}

void NodeEstXCurso::setSig(NodeEstXCurso *psig) {
	sig = psig;
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


string NodeEstXCurso::getDatoEst(void){
	std::string sNota = std::to_string(nota);
	string result = estudiante.toString();
	result += "Nota: " + sNota + "\n";
	result += "Estado: " + estado;
	return result;
}

string NodeEstXCurso::getDatoCur(void) {
	string result = curso.toString();
	return result;
}

string NodeEstXCurso::getCodigoEst(){
	string result = estudiante.getCodigo();
	return result;
}

string NodeEstXCurso::getCodigoCur() {
	string result = curso.getCodigo();
	return result;
}
