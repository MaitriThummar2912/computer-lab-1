#include<stdio.h>
int main()
{
    float H,L,Area;
    printf("Enter the value of H and L:");
    scanf("%f%f",&L,&H);
    Area= H*L/2;
    printf("The area of triangle is %f",Area);
}