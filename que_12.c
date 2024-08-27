#include<stdio.h>
#include<string.h>

int main(){
   char string[32];
   printf("enter the word\n");
   scanf("%s",string);
   int d=strlen(string);
   for(int i=d-1;i>=0;i--){
    printf("%c",string[i]);
   }
   return 0;
}