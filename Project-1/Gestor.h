#ifndef GESTOR_H
#define GESTOR_H

#include "ListaCursos.h"
#include "ListaEstudiantes.h"
#include <iostream>
#include <string>

using namespace std;

class Gestor{
public:
	Gestor();
	static void addCurso(string codigo, string nombre, string aula, string horario, string dia);
	static string mostrarCursos();
	static string mostrarEstudiantes();
	static string matricular(string pCodigoCurso, string pCodigoEst);
private:
	static ListaCursos listaCurso;
	static ListaEstudiantes listaEsrudiantes;
};

#endif // !GESTOR_H