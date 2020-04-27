#pragma once
#include "Node.h"
class Terminal : public Node
{
public:
	Terminal(int value);
	virtual int evaluate() override;
private:
	int value_;
};

