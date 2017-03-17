#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <string>

using namespace std;

class ListaCurXEstudiante;
class Estudiante{
public:
	Estudiante();
	Estudiante(string pNombre);
	void setCodigo();
	string getCodigo();
	void setNomEstudiante(string pnombre);
	string getNomEstudiante();
	ListaCurXEstudiante* getCursos();
	string toString();

private:
	static int autoGenerateEst;
	string codigo;
	string nombre;
	ListaCurXEstudiante* curXEstudiante;
};

#endif // !ESTUDIANTE_H