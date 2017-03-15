#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include <string>

using namespace std;

class Estudiante{
public:
	Estudiante();
	void setCodigo(int pcodigo);
	string getCodigo();
	void setNomEstudiante(string pnombre);
	string getNomEstudiante();

private:
	string codigo;
	string nombre;
};

#endif // !ESTUDIANTE_H