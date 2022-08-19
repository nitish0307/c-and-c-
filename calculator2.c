#include<stdint-gcc.h>
int main(){
    double first, second;
    char op;
    
   
    printf("enter the operands\n");
    scanf("%lf %lf", &first, &second);

    switch (op){
        case '+':
        printf("%.1lf + %.1lf = %.1lf", first + second, first, second);
        return 0;
    }
    


}