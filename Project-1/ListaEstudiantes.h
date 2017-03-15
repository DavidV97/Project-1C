#ifndef LISTAESTUDIANTES_H
#define LISTAESTUDIANTES_H

#include "NodeEstudiante.h"
#include<iostream>
using namespace std;

class ListaEstudiantes{
public:
	ListaEstudiantes();
	void setLongitud();
	int getLongitud() const;
	void setCabeza(NodeEstudiante *);
	NodeEstudiante *getCabeza() const;
	void agregarEstudiante(Estudiante pestudiante);
private:
	int longitud;
	NodeEstudiante *cabeza;
};
#endif // !LISTAESTUDIANTES_H