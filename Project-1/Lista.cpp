#include "Lista.h"

#include <string> 
#include <iostream>
using namespace std;

Lista::Lista() {

	longitud = 0;
	head = NULL;
}

void Lista::setLongitud() {

	longitud++;
}

int Lista::getLength() const {

	return longitud;
}

void Lista::setHead(Node *phead) {

	head = phead;
}

Node * Lista::getHead() const {

	return head;
}