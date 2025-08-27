#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    printf("Enter a and b:");
    scanf("%f %f" ,&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("c=%f",c);
    printf("d=%f",d);
    printf("e=%f",e);
    printf("f=%f",f);
}