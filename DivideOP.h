#pragma once
#include "NonTerminal.h"
class DivideOP : public NonTerminal
{
public:
	DivideOP(Node* left, Node* right);
	virtual int evaluate() override;

};

