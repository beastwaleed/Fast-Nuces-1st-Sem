#include<stdio.h>
int factorial(int num);
int main() {
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    printf("Factorial of %d = %d", num, factorial(num));
    return 0;
}

int factorial(int num) {
    if (num==1||num==0)
        return 1;
    else
        return num*factorial(num-1);;
}