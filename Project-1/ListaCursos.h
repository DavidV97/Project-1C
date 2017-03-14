#ifndef LISTACURSOS_H
#define LISTACURSOS_H

#include "Lista.h"
#include "NodeCurso.h"
#include<iostream>
using namespace std;

class ListaCursos : public Lista{
public:
	ListaCursos();
	void addCurso(Curso pcurso);

};
#endif // !LISTACURSOS_H