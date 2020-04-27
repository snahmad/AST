#include "pch.h"
#include "Terminal.h"
#include "PlusOp.h"
#include "MinusOp.h"
#include "MultiOP.h"
#include "DivideOP.h"

TEST(AST, EvaluateSingleTerminal) 
{
  
   Terminal terminal(2);

   EXPECT_EQ(2, terminal.evaluate());


}

TEST(AST, EvaluateSimplePlusExpression)
{
    auto terminal_left = new Terminal(3);
    auto terminal_right = new Terminal(2);
    PlusOp plus_op(terminal_left, terminal_right);

    EXPECT_EQ(5, plus_op.evaluate());


}

TEST(AST, EvaluateSimpleMinusExpression)
{
    auto terminal_left = new Terminal(9);
    auto terminal_right = new Terminal(14);
    MinusOp minus_op(terminal_left, terminal_right);

    EXPECT_EQ(-5, minus_op.evaluate());


}

TEST(AST, EvaluatePlusAndMinusExpression)
{
    auto terminal_left_for_plus = new Terminal(3);

    auto terminal_left_for_minus = new Terminal(8);
    auto terminal_right_for_minus = new Terminal(17);
    auto minus_op = new MinusOp(terminal_left_for_minus, terminal_right_for_minus);

    PlusOp expression(terminal_left_for_plus, minus_op);

    EXPECT_EQ(-6, expression.evaluate());


}
TEST(AST, EvaluateSimpleMultiplyExpression)
{
    auto terminal_left = new Terminal(9);
    auto terminal_right = new Terminal(8);
    MultiOP multi_op(terminal_left, terminal_right);

    EXPECT_EQ(72, multi_op.evaluate());
}
TEST(AST, EvaluateSimpleDivideExpression)
{
    auto terminal_left = new Terminal(72);
    auto terminal_right = new Terminal(8);
    DivideOP divide_op(terminal_left, terminal_right);

    EXPECT_EQ(9, divide_op.evaluate());
}

TEST(AST, EvaluateComplexExpression)
{
    auto minus_expression = new MinusOp(new Terminal(10), new Terminal(2));

    auto divide_expression = new DivideOP(new Terminal(9), new Terminal(3));

    MultiOP multi_op(minus_expression, divide_expression);


    EXPECT_EQ(24, multi_op.evaluate());


}