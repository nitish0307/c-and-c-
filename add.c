#include<stdio.h>
int main(void){
   //Syntax for addition (function has int because we are returning values for function//
   int sum();
   int add;
   add = sum();
   printf("Addition of two numbers is : %d",add);
}
int sum(){
   //Declaring actual parameters//
   int a,b,add;
   //Reading User I/p//
   printf("Enter a,b :");
   scanf("%d,%d",&a,&b);
   //Addition operation//
   add=a+b;
   //Returning value//
   return add;
}