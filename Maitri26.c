#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three value:");
    scanf("%f%f%f",&a,&b,&c);
    if(a==b&&a==c)
    {
        printf("All values are equal.\n",a,b,c);
    }
    else 
    if(a<b&&a<c)
    printf("%f is smallest value.\n",a);
    else 
    if(b<a&&b<c)
    printf("%f is smallest value.\n",b);
    else 
    printf("%f is smallest value.\n",c);
    
}


