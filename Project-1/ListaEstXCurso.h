#ifndef LISTAESTXCURSO_H
#define LISTAESTXCURSO_H
#include <algorithm>
#include "NodeEstXCurso.h"
#include<iostream>
using namespace std;

class ListaEstXCurso {
public:
	ListaEstXCurso();

	void setLength();
	int getLength();

	void setHead(NodeEstXCurso *phead);
	NodeEstXCurso *getHead()const;

	void addMatricula(Estudiante pEst, Curso pCur);
	bool estXCurVacio();
	string showListEstXCurso(Curso pCur);
	string showListCurXEst(Estudiante pEst);
	Estudiante searchEstudiante(string pCodigo);
	Curso searchCurso(string pCodigo);
	bool seEncuentraEst(string pcodigo);
	bool seEncuentraCur(string pcodigo);
	bool ListaEstXCurso::verCalifEstudiante(Estudiante pEst, Curso pCur);
	string califEstudiante(Estudiante pEst, Curso pCur, int pNota);
	string toUppercase(string pcodigo);
private:
	int length;
	NodeEstXCurso *head;
};

#endif // !LISTAESTXCURSO_H