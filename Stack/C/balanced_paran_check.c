/*corresponding to each opening bracket there must be a closing brace*/
/*this check is done by compiler to check if parantheses in program are balanced*/
/*just counting if the opening and closing parentheses are equal wont help though it is a necessary condition*/
/*last unclosed parantheses must be closed first*/
/*scan from left to right*/
/*if opening symbol add it to a list,if closing symbol remove last added element and compare*/
/*if they are a pair then continue else they are unbalanced*/


/* Pseudocode:
CheckBalancedParentheses(pass exp as a string)
{
    n=length of expression
    create a stack S
    for i=0 to n-1
    {
    if exp[i] is opening brace push that char on stack
        else if exp[i] is closing symbol
    {
    if S is empty top doesnt pair with exp[i] return false
    }
    else pop
    }
    return if s empty then balanced else unbalanced
}
