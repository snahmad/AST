#pragma once
#include "NonTerminal.h"
class PlusOp : public NonTerminal
{
public:
	PlusOp(Node* left, Node* right);
	virtual int evaluate() override;
};

