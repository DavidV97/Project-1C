#ifndef CURSO_H
#define CURSO_H
#include "ListaEstXCurso.h"
#include <iostream>
#include <string>
using namespace std;

class Curso{

public:
	Curso();
	Curso(string pcodigo, string pnombre, string paula, string phorario, string pdia);
	void setCodigo(string pcodigo);
	string getCodigo();
	void setNomCurso(string pnombre);
	string getNomCurso();
	void setAula(string paula);
	string getAula();
	ListaEstXCurso getEstudiantes();
	void setHorario(string phorario);
	string getHorario();
	void setDia(string pdia);
	string getDia();
	bool esvacio();
	string toString();
	
private:
	string codigo;
	string nombre;
	string aula;
	ListaEstXCurso estXCurso;
	string horario;
	string dia;

};

#endif // !CURSO_H

