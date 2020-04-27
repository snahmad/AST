#include "pch.h"
#include "Terminal.h"


Terminal::Terminal(int value)
	: value_(value)
{

}
int Terminal::evaluate()
{
	return value_;
}