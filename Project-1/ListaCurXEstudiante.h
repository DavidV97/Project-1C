#ifndef LISTACURXESTUDIANTE_H
#define LISTACURXESTUDIANTE_H
//#include "Estudiante.h"
#include "NodeCurXEstudiante.h"
#include<iostream>
using namespace std;

//class Estudiante;
class ListaCurXEstudiante {
public:
	ListaCurXEstudiante();

	void setLongitud();
	int getLongitud();

	void setHeadd(NodeCurXEstudiante *phead);
	NodeCurXEstudiante *getHeadd();

	void addCurso(Curso* pCurso);
	string showListCurXEstudiante();
	string searchCurso(string pCodigo);
	string delCurso(string pCodigo);
private:
	int length;
	NodeCurXEstudiante *head;
};

#endif // !LISTACURXESTUDIANTE_H