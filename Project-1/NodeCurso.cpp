#include "NodeCurso.h"

NodeCurso::NodeCurso(Curso pcurso){
	setCurso(pcurso);
}

void NodeCurso::setCurso(Curso pcurso) {

	curso = pcurso;
}

string NodeCurso::getCurso(void) {

	return curso.getNomCurso();
}