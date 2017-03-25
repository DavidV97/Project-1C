#ifndef LISTACURSOS_H
#define LISTACURSOS_H
#include <algorithm>
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
	string mostrarCursos();
	string buscarInfoDelCurso(string pcodigo);
	Curso buscarCurso(string pcodigo);
	bool seEncuentraCurso(string pcodigo);
	string toUppercase(string pcodigo);
private:
	int longitud;
	NodeCurso *head;
};
#endif // !LISTACURSOS_H