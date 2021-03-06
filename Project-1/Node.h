#ifndef NODE_H
#define NODE_H
#include<iostream>
#include "Estudiante.h"
#include "Curso.h"
using namespace std;

class Node {

public:
	Node(Estudiante estudiante);
	Node(Curso curso);

	void setSig(Node*);
	Node* getSig();

	void setEstudiante(Estudiante pestudiante);
	Estudiante getEstudiantes(void);

	void setCurso(Curso pcurso);
	Curso getCurso(void);

private:
	Estudiante estudiante;
	Curso curso;
	Node* sig;

};

#endif // !NODE_H

