#ifndef LISTAESTUDIANTES_H
#define LISTAESTUDIANTES_H

#include "Lista.h"
#include "NodeEstudiante.h"
#include<iostream>
using namespace std;

class ListaEstudiantes : public Lista{
public:
	ListaEstudiantes();
	void addEstudiante(Estudiante pestudiante);
};
#endif // !LISTAESTUDIANTES_H