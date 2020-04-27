#pragma once
#include "Node.h"
class NonTerminal : public Node
{
public:
	NonTerminal(Node* left, Node* right);
	virtual ~NonTerminal();
protected:
	Node* left_;
	Node* right_;

};

