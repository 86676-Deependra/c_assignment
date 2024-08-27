#include<stdio.h>

int main(){
   int marks;
   int p1,p2,p3,p4,p5;
   printf("enter your marks in 5 subjects : \n");
   scanf("%d\n%d\n%d\n%d\n%d",&p1,&p2,&p3,&p4,&p5);
   marks=p1+p2+p3+p4+p5;
   printf("YOUR GRADE IS ");
   if(marks>=90){
    printf("Ex");
   }
   else if (marks<90 && marks>=80)
   {
    printf("A");
   }
   else if (marks<80 && marks>=70)
   {
    printf("B");
   }
   else if (marks<70 && marks>=70)
   {
    printf("C");
   }
   else{
    printf("F");
   }
   
   
   
   return 0;
}