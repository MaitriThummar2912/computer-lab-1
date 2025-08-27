#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter a value of bytes:");
    scanf("%f",&a);
    b=a/1024;
    c=b/1024;
    d=c/1024;
    printf("KB=%f\n",b);
    printf("MB=%f\n",c);
    printf("GB=%f\n",d);
    
}