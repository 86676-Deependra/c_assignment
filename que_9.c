#include<stdio.h>

int main(){
   int num;
   printf("enter the number : ");
   scanf("%d",&num);
   printf("\nGIVEN NUMBER : %d",num);
   
   printf("\nOctal equivalent : %o",num);
   printf("\nHexadecimal equivalent : %x ",num);
   int array[32];
   int count;
   int i=0;
   while(num>0){
    count=num%2;
    array[i]=count;
    num=num/2;
    i++;
   }
   printf("\nbinary equivalent : ");
   for(int j=i-1;j>=0;j--){
    printf("%d",array[j]);
   }
   return 0;
}