#include "Estudiante.h"

Estudiante::Estudiante() {

}

Estudiante::Estudiante(string pNombre){
	setCodigo();
	setNomEstudiante(pNombre);
}

void Estudiante::setCodigo(){
	std::string sAutoGenerate = std::to_string(autoGenerate);
	codigo = "Est-" + sAutoGenerate;
	*(int*)&autoGenerate += 1;
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
	string result = getCodigo() + "\n";
	result += getNomEstudiante() + "\n";
	return result;
}

