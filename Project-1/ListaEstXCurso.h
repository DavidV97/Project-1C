#ifndef LISTAESTXCURSO_H
#define LISTAESTXCURSO_H

#include "NodeEstXCurso.h"
#include<iostream>
using namespace std;

class ListaEstXCurso {
public:
	ListaEstXCurso();
	void setLongitud();
	int getLength() const;
	void setHead(NodeEstXCurso *);
	NodeEstXCurso *getHead() const;
	void addEstudiante(Estudiante* pestudiante);
private:
	int longitud;
	NodeEstXCurso *head;
};
#endif // !LISTAESTUDIANTES_H

