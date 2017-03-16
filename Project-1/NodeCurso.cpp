#include "NodeCurso.h"

NodeCurso::NodeCurso(Curso pcurso){
	setCurso(pcurso);
}

void NodeCurso::setSig(NodeCurso *psig) {
	sig = psig;
}

NodeCurso * NodeCurso::getSig() {
	return sig;
}

void NodeCurso::setCurso(Curso pcurso){
	curso = pcurso;
}

Curso NodeCurso::getCurso(void) {
	return curso;
}

string NodeCurso::toString(){
	string resul = "Nombre del curso: "+curso.getNomCurso() + "\n";
	resul += "Codigo: " + curso.getCodigo() + "\n";
	resul += "Aula: " + curso.getAula() + "\n";
	resul += "Dia: " + curso.getDia() + "\n";
	resul += "Horario: " + curso.getHorario() + "\n";
	return resul;
}
