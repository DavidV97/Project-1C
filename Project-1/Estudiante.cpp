#include "Estudiante.h"

int Estudiante::autoGenerateEst = 1;

Estudiante::Estudiante() {}

Estudiante::Estudiante(string pNombre, ListaEstXCurso* pCurXEst){
	setCodigo();
	setNomEstudiante(pNombre);
	setCursos(pCurXEst);
}

void Estudiante::setCodigo(){
	std::string sAutoGenerate = std::to_string(autoGenerateEst);
	codigo = "Est-" + sAutoGenerate;
	autoGenerateEst++;
}

string Estudiante::getCodigo(){
	return this->codigo;
}

void Estudiante::setNomEstudiante(string pnombre) {
	nombre = pnombre;
}

string Estudiante::getNomEstudiante() {
	return this->nombre;
}

void Estudiante::setCursos(ListaEstXCurso * pCurXEst){
	this->curXEst = pCurXEst;
}

ListaEstXCurso* Estudiante::getCursos()const {
	return curXEst;
}

string Estudiante::toString(){
	string result = "Codigo: " + getCodigo() + "\n";
	result += "Nombre: " + getNomEstudiante() + "\n";
	return result;
}