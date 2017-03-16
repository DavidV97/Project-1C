#include "Curso.h"

Curso::Curso() {}

Curso::Curso(string pcodigo, string pnombre, string paula, string phorario, string pdia){
	setCodigo(pcodigo);
	setNomCurso(pnombre);
	setAula(paula);
	setHorario(phorario);
	setDia(pdia);
}

void Curso::setCodigo(string pcodigo) {
	codigo = pcodigo;
}

string Curso::getCodigo() {
	return this->codigo;
}

void Curso::setNomCurso(string pnombre) {
	nombre = pnombre;
}

string Curso::getNomCurso(){
	return this->nombre;
}

void Curso::setAula(string paula) {
	aula = paula;
}

string Curso::getAula() {
	return this->aula;
}

ListaEstXCurso Curso::getEstudiantes(){
	return this->estXCurso;
}

void Curso::setHorario(string phorario) {
	horario = phorario;
}

string Curso::getHorario() {
	return this->horario;
}

void Curso::setDia(string pdia) {
	dia = pdia;
}

string Curso::getDia() {
	return this->dia;
}

string Curso::toString(){
	string result = getCodigo() + "\n";
	result += getNomCurso() + "\n";
	result += getAula() + "\n";
	result += getHorario() + "\n";
	result += getDia() + "\n";
	return result;
}
