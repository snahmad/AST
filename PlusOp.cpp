#include "pch.h"
#include "PlusOp.h"


PlusOp::PlusOp(Node* left, Node* right)
	: NonTerminal(left, right)
{
}
int PlusOp::evaluate()
{
	return left_->evaluate() + right_->evaluate();
}