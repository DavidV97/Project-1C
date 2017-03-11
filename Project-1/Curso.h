#ifndef CURSO_H
#define CURSO_H
#include <iostream>
#include <string>
#include "Lista.h"

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
	void setEstudiantes(Lista pestudiantes);
	Lista getEstudiantes();
	void setHorario(string phorario);
	string getHorario();
	void setDia(string pdia);
	string getDia();

	/*Holaa Davidcito*/
	/*aqui*//*DAVID*/


	/*HOLA JOTAPE*/
	/*Hola a todos <3 */

	
private:
	string codigo;
	string nombre;
	string aula;
	Lista estudiantes;
	string horario;
	string dia;

};

#endif // !CURSO_H

