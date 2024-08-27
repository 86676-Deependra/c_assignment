#include<stdio.h>

int main(){
   int size;
   printf("enter the number of input numbers : \n");
   scanf("%d",&size);
   int array[size];
   int num;
   printf("enter your numbers : \n ");
   for(int i=0;i<size;i++){
    scanf("%d",&num);
    array[i]=num;
   }
   int count=0;
   for(int i=0;i<size;i++){
    if(array[i]>count){
        count=array[i];
    }
   }
   printf("the maximum of the given numbers is %d ",count);
   return 0;
}