#include<stdio.h>
void square(int a);
void squarepointer(int *a);
int main(){
int a = 5;
square(a);
printf("the number is %d\n:", a );
squarepointer(&a);
printf("the number is %d\n:", a);// call by value and call by reference 
                                 //difference for 10 marks
return 0;
}

void square(int a){
    a = a*a;
printf("square is %d\n", a);

}
void squarepointer(int *a){
    *a = *a *  *a;
    printf("squarepointer is %d\n", *a);

}

