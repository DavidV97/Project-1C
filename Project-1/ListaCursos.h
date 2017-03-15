#ifndef LISTACURSOS_H
#define LISTACURSOS_H

#include "Lista.h"
#include "NodeCurso.h"
#include<iostream>
using namespace std;

class ListaCursos : public Lista{
public:
	ListaCursos();
	typedef ListaCursos super;
	void addCurso(Curso pcurso);
	bool cursoVacio();
	string mostrarCurso();
	string buscarCurso(int pcodigo);

};
#endif // !LISTACURSOS_H