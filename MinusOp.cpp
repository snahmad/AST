#include "pch.h"
#include "MinusOp.h"

MinusOp::MinusOp(Node* left, Node* right)
	: NonTerminal(left, right)
{
}
int MinusOp::evaluate()
{
	return left_->evaluate() - right_->evaluate();
}