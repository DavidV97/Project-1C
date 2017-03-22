#ifndef LISTAESTUDIANTES_H
#define LISTAESTUDIANTES_H
#include <algorithm>
#include "NodeEstudiante.h"
#include<iostream>
using namespace std;

class ListaEstudiantes{
public:
	ListaEstudiantes();
	void setLongitud();
	int getLongitud() const;
	void setHead(NodeEstudiante *);
	NodeEstudiante *getHead() const;

	void addEstudiante(Estudiante pEstudiante);
	bool estudianteVacio();
	string mostrarEstudiantes();
	string buscarInfoDelEstudiante(string pCodigo);
	Estudiante buscarEstudiante(string pCodigo);
	bool seEncuentraEstudiante(string pCodigo);
	string toUppercase(string pcodigo);
private:
	int longitud;
	NodeEstudiante *head;
};
#endif // !LISTAESTUDIANTES_H