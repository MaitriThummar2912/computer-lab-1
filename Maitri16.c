#include<stdio.h>
int main()
{
    float P,R,N,I;
    printf("Enter a value of P,R,N:");
    scanf("%f%f%f",&P,&R,&N);
    I= (P*R*N)/100;
    printf("The value of interest is %f",I);
    
}