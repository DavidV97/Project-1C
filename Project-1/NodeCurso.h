#ifndef NODECURSO_H
#define NODECURSO_H

#include "Curso.h"
#include<iostream>
using namespace std;

class NodeCurso{
public:
	NodeCurso(Curso curso);
	void setSig(NodeCurso*);
	NodeCurso* getSig();
	void setCurso(Curso pcurso);
	Curso getCurso(void);

private:
	NodeCurso* sig;
	Curso curso;
};
#endif // !NODECURSO_H
