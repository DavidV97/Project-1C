#include "Curso.h"

int Curso::autoGenerateCur = 1;

Curso::Curso() {}

Curso::Curso(string pnombre, string paula, string phorario, string pdia, ListaEstXCurso* pEstXCur){
	setCodigo();
	setNomCurso(pnombre);
	setAula(paula);
	setHorario(phorario);
	setDia(pdia);
	setEstudiantes(pEstXCur);
}

void Curso::setCodigo() {
	std::string sAutoGenerate = std::to_string(autoGenerateCur);
	codigo = "Cur-" + sAutoGenerate;
	autoGenerateCur++;
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

void Curso::setEstudiantes(ListaEstXCurso * pEstXCur){
	this->estXCurso = pEstXCur;
}

ListaEstXCurso* Curso::getEstudiantes()const{
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
	string result = "Codigo: " + getCodigo() + "\n";
	result += "Nombre: " + getNomCurso() + "\n";
	result += "Aula: " + getAula() + "\n";
	result += "Horario: " + getHorario() + "\n";
	result += "Dia: " + getDia() + "\n";
	return result;
}
