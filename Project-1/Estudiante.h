#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include <string>
#include "Lista.h"

using namespace std;

class Estudiante{
public:
	Estudiante();
	void setCodigo(int pcodigo);
	int getCodigo();
	void setNomEstudiante(string pnombre);
	string getNomEstudiante();
	//void setNota(double pnota);
	//double getNota();
	//void setEstado(string pestado);
	//string getEstado();
	void asigEstado();

private:
	int codigo;
	string nombre;
	//double nota;
	//string estado;
};

#endif // !ESTUDIANTE_H