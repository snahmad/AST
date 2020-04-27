#include "pch.h"
#include "NonTerminal.h"

NonTerminal::NonTerminal(Node* left, Node* right)
	: left_(left)
	, right_(right)
{
}

NonTerminal::~NonTerminal()
{
	delete left_;
	delete right_;
}