#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include <string>

using namespace std;

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
	static const int autoGenerate = 0;
	string codigo;
	string nombre;


};

#endif // !ESTUDIANTE_H