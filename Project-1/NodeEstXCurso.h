#ifndef NODEESTXCURSO_H
#define NODEESTXCURSO_H
#include "Curso.h"
#include "Estudiante.h"
#include <string> 
#include <iostream>
using namespace std;
class NodeEstXCurso {
public:
	NodeEstXCurso(Estudiante*, Curso*);

	Curso* getCurso();
	Estudiante* getEstudiante();
	NodeEstXCurso* getSig();
	int getNota();
	string getEstado();

	void setCurso(Curso*);
	void setEstudiante(Estudiante*);
	void setSig(NodeEstXCurso*);
	void setNota(int pNota);
	void setEstado();

	string getDatoEst();
	string getDatoCur();
	string getCodigoEst();
	string getCodigoCur();
private:
	Curso* curso;
	Estudiante* estudiante;
	NodeEstXCurso* sig;
	int nota;
	string estado;
};
#endif // !NODEESTXCURSO_H