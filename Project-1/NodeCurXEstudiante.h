#ifndef NODECURXESTUDIANTE_H
#define NODECURXESTUDIANTE_H
#include "Curso.h"

#include<iostream>
using namespace std;

class NodeCurXEstudiante {
public:
	NodeCurXEstudiante(Curso* pCurso);

	void setSig(NodeCurXEstudiante*);
	NodeCurXEstudiante* getSig();

	void setCurso(Curso* pCurso);
	Curso* getCurso();
	string getDato();
	string getCodigoCur();
private:
	NodeCurXEstudiante* sig;
	Curso* curso;
};
#endif // !NODECURXESTUDIANTE_H