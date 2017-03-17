#ifndef NODOESTUDIANTE_H
#define NODOESTUDIANTE_H

#include "Estudiante.h"
#include<iostream>
using namespace std;

class NodeEstudiante{
public:
	NodeEstudiante(Estudiante pEstudiante);
	void setSig(NodeEstudiante*);
	NodeEstudiante* getSig();
	void setEstudiante(Estudiante pEstudiante);
	Estudiante getEstudiante(void);
	string toString();
private:
	NodeEstudiante* sig;
	Estudiante estudiante;
};
#endif // !NODOESTUDIANTE_H
