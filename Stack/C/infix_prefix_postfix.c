-infix notation:write operator between two operands
-order of operation:
1)Parentheses
2)Exponents:right to left
3)Multiplication and division:left to right
4)Addition and subtraction;left to right

-prefix or polish notation:operator placed b4 operands

-postfix or reverse polish notation:operator after operands;
-easiest to parse and least costly in terms of time and memory

-evaluate postfix(exp)
{
create a stack S
for i=0 to length(exp-1)
	{
	if exp[i] is operand
	push(exp[i])
	}
	else if exp[i] is operator
	op2=pop and op1=pop
	push op1 operator op2
}