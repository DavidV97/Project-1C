#ifndef LISTA_H
#define LISTA_H
#include "Node.h"

#include<iostream>
using namespace std;

class Lista {

protected:

	int longitud;
	Node *head;

public:

	Lista();

	void setLongitud();
	int getLength() const;

	void setHead(Node *);
	Node *getHead() const;
};

#endif // !LISTA_H

