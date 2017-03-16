#ifndef NODOESTXCURSO_H
#define NODOESTXCURSO_H

#include "Estudiante.h"
#include<iostream>
using namespace std;

class NodeEstXCurso {
public:
	NodeEstXCurso(Estudiante* pEstudiante);
	void setSig(NodeEstXCurso*);
	NodeEstXCurso* getSig();
	void setEstudiante(Estudiante* pEstudiante);
	Estudiante* getEstudiante(void);
private:
	NodeEstXCurso* sig;
	int nota;//add get & set
	string estado;//add get & set
	Estudiante* estudiante;
};
#endif // !NODOESTXCURSO_H