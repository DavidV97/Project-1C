#ifndef CURSO_H
#define CURSO_H

#include "ListaEstXCurso.h"
#include <iostream>
#include <string>
using namespace std;
class ListaEstXCurso;
class Curso{

public:
	Curso();
	Curso(string pnombre, string paula, string phorario, string pdia);
	void setCodigo();
	string getCodigo();
	void setNomCurso(string pnombre);
	string getNomCurso();
	void setAula(string paula);
	string getAula();
	void setEstudiantes(ListaEstXCurso);
	ListaEstXCurso getEstudiantes();
	void setHorario(string phorario);
	string getHorario();
	void setDia(string pdia);
	string getDia();
	string toString();
	
private:
	static int autoGenerateCur;
	string codigo;
	string nombre;
	string aula;
	ListaEstXCurso estXCurso;
	string horario;
	string dia;
};

#endif // !CURSO_H

