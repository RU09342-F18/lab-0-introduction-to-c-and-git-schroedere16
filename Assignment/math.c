/*
created September 9, 2018
Last updated September 9, 2018
Author: Eric Schroeder*/

#include <stdio.h>
#include <math.h>

int main(int num1, int num2, char Operator)
{
   
    Operator = num1+num2; //inputs must be real numbers 
    printf("num1+num2 = %d \n",Operator);
    Operator = num1-num2; //inputs must be real numbers
    printf("num1-num2 = %d \n",Operator);
    Operator = num1*num2; //inputs must be real numbers
    printf("num1*num2 = %d \n",Operator);
    Operator=num1/num2; //inputs must be real numbers, decimal answers are displayed as zero
    printf("num1/num2 = %d \n",Operator);
    Operator=num1%num2; //inputs must be real numbers
    printf("Remainder when num1 divided by num2 = %d \n",Operator);
    Operator = num1<<num2; //inputs must be real numbers
    printf ("num1 shifted left by num2 = %d \n", Operator);
    Operator = num1>>num2; //inputs must be real numbers
    printf ("num1 shifted right by num2 = %d \n", Operator);
    Operator = num1&num2; //inputs must be real numbers
    printf ("Bitwise AND of num1 and num2 = %d \n", Operator);
    Operator = num1|num2; //inputs must be real numbers
    printf ("Bitwise OR of num1 sand num2 = %d \n", Operator);
    Operator = num1^num2; //inputs must be real numbers
    printf ("Bitwise XOR of num1 and num2 = %d \n", Operator);
    Operator = ~num1; //inputs must be real number
    printf ("Bitwise inverse of num1 = %d \n", Operator);
    Operator = ~num2; //input must be a real number
    printf ("Bitwise inverse of num2 = %d \n", Operator);
    return 0;
}
