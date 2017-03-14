#include "Estudiante.h"

Estudiante::Estudiante(){
}

void Estudiante::setCodigo(int pcodigo){
	codigo = pcodigo;
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

