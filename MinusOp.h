#pragma once
#include "NonTerminal.h"
class MinusOp : public NonTerminal
{
public:
	MinusOp(Node* left, Node* right);
	virtual int evaluate() override;

};

