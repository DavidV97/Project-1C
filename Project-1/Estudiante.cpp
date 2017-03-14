#include "Estudiante.h"

Estudiante::Estudiante(){
}

void Estudiante::setCodigo(int pcodigo){
	codigo = pcodigo;
}

int Estudiante::getCodigo(){
	return this->codigo;
}

void Estudiante::setNomEstudiante(string pnombre) {
	nombre = pnombre;
}

string Estudiante::getNomEstudiante() {
	return this->nombre;
}

/*void Estudiante::setNota(double pnota) {
	nota = pnota;
	asigEstado();
}

double Estudiante::getNota() {
	return this->nota;
}

void Estudiante::setEstado(string pestado) {
	estado = pestado;
}

string Estudiante::getEstado(){
	return this->estado;
}

void Estudiante::asigEstado(){

	if (nota >= 70) {

		setEstado("aprobado");

	}
	else if (nota >= 60) {

		setEstado("aplazado");

	}
	else {

		setEstado("reprobado");
	}
}*/

