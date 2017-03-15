#ifndef LISTAESTUDIANTES_H
#define LISTAESTUDIANTES_H

#include "NodeEstudiante.h"
#include<iostream>
using namespace std;

class ListaEstudiantes{
public:
	ListaEstudiantes();
	void setLongitud();
	int getLength() const;
	void setHead(NodeEstudiante *);
	NodeEstudiante *getHead() const;
	void addEstudiante(Estudiante pestudiante);
	bool cursoVacio();
	string mostrarCurso();
	string buscarCurso(int pcodigo);
private:
	int longitud;
	NodeEstudiante *head;
};
#endif // !LISTAESTUDIANTES_H