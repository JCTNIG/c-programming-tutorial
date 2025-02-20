/*
    Ternary Operator
We use the ternary operator for decision making in place of
longer if and else conditional statements.

The ternary operator take three arguments:

The first is a comparison argument
The second is the result upon a true comparison
The third is the result upon a false comparison

The ternary operator could be said to be a shorthand
way of writing an if-else statement.

Syntax
condition ? value_if_true : value_if_false

Ternary operator can also be nested
*/

#include <stdio.h>

int main()
{
    int num;
    
   printf("Enter a number\n");
   scanf("%d",&num);
   
   num % 2 == 0 ? printf("%d is an even number", num) : printf("%d is an odd number", num);
   
return (0);
}
