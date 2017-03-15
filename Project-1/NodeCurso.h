#ifndef NODECURSO_H
#define NODECURSO_H

#include "Node.h"
#include "Curso.h"
#include<iostream>
using namespace std;

class NodeCurso : public Node{
public:
	typedef Node super;
	NodeCurso(Curso* curso);
	void setCurso(Curso* pcurso);
	string getCurso(void);
private:
	Curso* curso;
};
#endif // !NODECURSO_H
