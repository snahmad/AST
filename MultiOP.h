#pragma once
#include "NonTerminal.h"
class MultiOP : public NonTerminal
{
public:
	MultiOP(Node* left, Node* right);
	virtual int evaluate() override;
};

