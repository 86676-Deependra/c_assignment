#include<stdio.h>

int main(){
   int num;
   printf("enter the number : ");
   scanf("%d",&num);
   int i=0;
   int num1=0;
   int num2=1;
   int num3;
   printf("Fibonacci series : %d %d",num1,num2);
   while(i<num-2){
    num3=num1+num2;
    printf(" %d",num3);
    num1=num2;
    num2=num3;
    i++;
   }
   return 0;
}