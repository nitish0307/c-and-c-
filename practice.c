#include<stdio.h>
int main()
{
    int miles = 65, yard = 385;
    double kilometers;
    kilometers = 1.609 * (miles + yard/1760.0);
    printf("\nA marathon is %lf kilometers.\n", kilometers);
    return 0;
}