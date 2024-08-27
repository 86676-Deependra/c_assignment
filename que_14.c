#include<stdio.h>
#include<string.h>

int main(){
   char string[20];
   printf("Enter the word to check palindrome : ");
   scanf("%s",&string);
   int len=strlen(string);
   int d=len-1;
   int count=0;
   int i=0;
   while(d>=0){
      if(string[i]==string[d]){
         count++;
      }
      i++;
      d--;
   }
   if(count==len){
      printf("IT IS A PALINDROME");
   }
   else{
      printf("ITS NOT A PALINDROME");
   }
} 
