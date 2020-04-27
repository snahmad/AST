#include "pch.h"
#include "MultiOP.h"

MultiOP::MultiOP(Node* left, Node* right)
	: NonTerminal(left, right)
{
}
int MultiOP::evaluate()
{
	return left_->evaluate() * right_->evaluate();
}