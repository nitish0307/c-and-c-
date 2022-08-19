#include<stdio.h>
int main(){
    
    int fahrenheit, celcius;
    printf("enter fahrenheit as an integer");
    scanf("%d", &fahrenheit);
    //this is the conversion:
    celcius = (fahrenheit - 32)/1.8;
    printf("\n %d fahrenheit is %d celcius.\n", fahrenheit, celcius);
    return 0;
}