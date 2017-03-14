#ifndef NODOESTUDIANTE_H
#define NODOESTUDIANTE_H

#include "Node.h"
#include "Estudiante.h"
#include<iostream>
using namespace std;

class NodeEstudiante : public Node {
public:
	NodeEstudiante(Estudiante estudiante);
	void setEstudiante(Estudiante pestudiante);
	string getEstudiante(void);
private:
	Estudiante estudiante;
};
#endif // !NODOESTUDIANTE_H
