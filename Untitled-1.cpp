#include<stdio.h>
int main(){
    int aadhar[3];

    int *ptr = &aadhar[0];
    for(int i=0; i<3; i++){
        printf("%d index : ", i);
        scanf("%d", (ptr+1));

    }
    for(int i=0; i<3; i++)
    {
        printf("%d index = %d\n", i, *(ptr+1));

    
    }
return 0;
}
