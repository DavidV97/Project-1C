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