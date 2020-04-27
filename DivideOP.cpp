#include "pch.h"
#include "DivideOP.h"


DivideOP::DivideOP(Node* left, Node* right)
	: NonTerminal(left, right)
{
}
int DivideOP::evaluate()
{
	return left_->evaluate() / right_->evaluate();
}