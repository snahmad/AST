# This project represent Asbstract Syntax Tree as Composite Data Structure.

## It contains list of useful tests to get 100% coverage.
## It has base class of Node with pure virtual method evaluate
## Terminal class derive from Node class to override evaluate. This class represent single number.
## NonTerminal class repssent simple expression such as 3 + 4, 5 /7. This class takes two Nodes. left and right. Node can be Terminal or NonTerminal.

## All OP class derive from  NonTerminal which takes two left and right node.
### PlusOP class evaluate using addtional operator.
### MinusOP class evaluate using subtraction operator
### MultiOP class evaluate using multiple operator
### DivideOP class evaluate using divide operator

## Unit tests for each operation and few complex expression evaluation. 
