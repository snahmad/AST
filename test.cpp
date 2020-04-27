#include "pch.h"
#include "Terminal.h"
#include "PlusOp.h"
#include "MinusOp.h"

TEST(AST, TestSingleTerminal) 
{
  
   Terminal terminal(2);

   EXPECT_EQ(2, terminal.evaluate());


}

TEST(AST, TestSimplePlusExpression)
{
    auto terminal_left = new Terminal(3);
    auto terminal_right = new Terminal(2);
    PlusOp plus_op(terminal_left, terminal_right);

    EXPECT_EQ(5, plus_op.evaluate());


}

TEST(AST, TestSimpleMinusExpression)
{
    auto terminal_left = new Terminal(9);
    auto terminal_right = new Terminal(14);
    MinusOp minus_op(terminal_left, terminal_right);

    EXPECT_EQ(-5, minus_op.evaluate());


}