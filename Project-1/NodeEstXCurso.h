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

	void setNota(int pNota);
	int getNota();
	void setEstado();
	string getEstado();
	void setEstudiante(Estudiante* pEstudiante);
	Estudiante* getEstudiante(void);
	string getDato();
	string getCodigoEst();
private:
	NodeEstXCurso* sig;
	int nota;
	string estado;
	Estudiante* estudiante;
};
#endif // !NODOESTXCURSO_H