#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include <string>

using namespace std;
class ListaEstXCurso;
class Estudiante{
public:
	Estudiante();
	Estudiante(string pNombre);
	void setCodigo();
	string getCodigo();
	void setNomEstudiante(string pnombre);
	string getNomEstudiante();
	string toString();

private:
	static int autoGenerateEst;
	string codigo;
	string nombre;
};

#endif // !ESTUDIANTE_H