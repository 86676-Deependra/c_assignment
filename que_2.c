#include<stdio.h>

int main(){
   int num;
   printf("enter the number: ");
   scanf("%d",&num);
   printf("\n%d",num);
   for(int i=num-1;i>0;i--){
    printf("*%d",i);
    num=num*i;
   }
   printf(" = %d",num);
   return 0;
}