#include<stdio.h>
void display(int num);
int main() {
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    display(num);
    return 0;
}

void display(int num) {
   printf("(num=%d-1) My name\n",++num);
   if(num<5){
       display(num);
   }
}