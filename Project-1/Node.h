#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;

class Node {
public:
	void setSig(Node*);
	Node* getSig();
protected:
	Node* sig;

};

#endif // !NODE_H

