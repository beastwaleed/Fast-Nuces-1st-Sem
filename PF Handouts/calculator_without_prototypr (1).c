#include<stdio.h>

int main()
{
    // Take input from the user.
    int number1, number2;
    printf("Enter two Integers: ");
    scanf("%d%d", &number1, &number2);
 
    printf("Sum of %d+%d = %d \n", number1, number2, add(number1, number2));
    printf("subtraction of %d-%d = %d \n", number1, number2, subtract(number1, number2));
    printf("Multiplication of %d*%d = %d \n", number1, number2, product(number1, number2));
    printf("Division of %d/%d = %d \n", number1, number2, division(number1, number2));
    printf("ModuloDivision of %d%%%d = %d \n", number1, number2, moduloDivision(number1, number2));
 
    return 0;
}
 

int add(int num1, int num2)
{
    return num1+num2;
}
 

int subtract(int num1, int num2)
{
    return num1-num2;
}
 

int product(int num1, int num2)
{
    return num1*num2;
}

 
int division(int num1, int num2)
{
    return num1/num2;
}
 

int moduloDivision(int num1, int num2)
{
    return num1%num2;
}