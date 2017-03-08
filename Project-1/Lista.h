#ifndef LISTA_H
#define LISTA_H
#include "Node.h"

#include<iostream>
using namespace std;

class Lista {

private:

	int longitud;
	Node *head;
	string nombre;
	string tipo;
	void ordenarLista();
	void buscarDato();

public:

	Lista();

	Lista(string name);

	void setLongitud();
	int getLength() const;

	void setHead(Node *);
	Node *getHead() const;

	void setTipo(string pTipo);
	string getTipo();

	void setNombre(string name);
	string getNombre();

	string mostrarLista();

	void addEstudiante(Estudiante pestudiante);
	void addCurso(Curso pcurso);

	string buscarDato(int pdato);
};

#endif // !LISTA_H

