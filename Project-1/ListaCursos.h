#ifndef LISTACURSOS_H
#define LISTACURSOS_H

#include "NodeCurso.h"
#include<iostream>
using namespace std;

class ListaCursos{
public:
	ListaCursos();
	void setLongitud();
	int getLength() const;
	void setHead(NodeCurso *);
	NodeCurso *getHead() const;
	void addCurso(Curso pcurso);
	bool cursoVacio();
	string mostrarCurso();
private:
	int longitud;
	NodeCurso *head;
};
#endif // !LISTACURSOS_H