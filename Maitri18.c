#include<stdio.h>
int main()
{
    int length,breadth,Area,Perimeter;
    printf("Enter length of a rectangular:");
    scanf("%d",&length);
    if(length<=0)
    {
        printf("The length of a rectangular cannot be nagative or zero");
        return 1;
    }
    printf("Enter breadth of a rectangular:");
    scanf("%d",&breadth);
    if(breadth<=0)
    {
        printf("The breadth of a rectangular cannot be nagative or zero");
        return 1;
    }
    Area= length * breadth;
    Perimeter=2 * (length + breadth);
    printf("The area of a rectangular is %d\n",Area);
    printf("The perimeter of a rectangular is %d\n",Perimeter);
    return 0;
}