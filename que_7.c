#include<stdio.h>

int main(){
   int num;
   printf("enter the number : ");
   scanf("%d",&num);
   int count;
   for(int i=1;i<=10;i++){
    count=num*i;
    printf("%d\n",count);
   }   
   return 0;
}