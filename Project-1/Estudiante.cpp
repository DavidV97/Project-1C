#include "Estudiante.h"

int Estudiante::autoGenerateEst = 1;

Estudiante::Estudiante() {}

Estudiante::Estudiante(string pNombre){
	setCodigo();
	setNomEstudiante(pNombre);
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

string Estudiante::toString(){
	string result = "Codigo: " + getCodigo() + "\n";
	result += "Nombre: " + getNomEstudiante() + "\n";
	return result;
}