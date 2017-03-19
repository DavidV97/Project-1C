#ifndef LISTAESTXCURSO_H
#define LISTAESTXCURSO_H

#include "NodeEstXCurso.h"
#include<iostream>
using namespace std;

class ListaEstXCurso {
public:
	ListaEstXCurso();

	void setLength();
	int getLength();

	void setHead(NodeEstXCurso *phead);
	NodeEstXCurso *getHead();

	void addEstudiante(Estudiante* pestudiante);
	string showListEstXCurso();
	Estudiante* searchEstudiante(string pCodigo);
	string delEstudiante(string pCodigo);
private:
	int length;
	NodeEstXCurso *head;
};

#endif // !LISTAESTXCURSO_H