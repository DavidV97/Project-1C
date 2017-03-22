#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include <string>

using namespace std;
class ListaEstXCurso;
class Estudiante{
public:
	Estudiante();
	Estudiante(string pNombre, ListaEstXCurso* pCurXEst);
	void setCodigo();
	string getCodigo();
	void setNomEstudiante(string pnombre);
	string getNomEstudiante();
	void setCursos(ListaEstXCurso*);
	ListaEstXCurso* getCursos()const;
	string toString();

private:
	static int autoGenerateEst;
	string codigo;
	string nombre;
	ListaEstXCurso* curXEst;
};

#endif // !ESTUDIANTE_H