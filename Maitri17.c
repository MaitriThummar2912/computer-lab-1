#include<stdio.h>
int main()
{
    int length,Area,Perimeter;
    printf("Enter the length of a square:");
    scanf("%d",&length);
    Area=length * length;
    Perimeter=4 * length;
    printf("The Area of a square is %d\n",Area);
    printf("The Perimeter of a square is %d\n",Perimeter);

    
}