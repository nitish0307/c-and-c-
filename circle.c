#include<stdio.h>
#define PI 3.145905

int main(){
    double  area = 0.0, radius = 0.0;
    printf("enter radius:");
    scanf("%lf", &radius);
    //this is the formula:
    area = PI * radius * radius;
    printf("radius of %lf meters; area is %lf sq,meters\n", radius, area);
    
    return 0;
}
