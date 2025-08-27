#include<stdio.h>
int main()
{
    float maths_mark,physics_mark,chemistry_mark,average,total;
    printf("Enter marks:");
    scanf("%f%f%f",&maths_mark,&physics_mark,&chemistry_mark);
    total=maths_mark + physics_mark + chemistry_mark;
    average=total/3;
    printf("total=%f\n",total);
    printf("average=%f\n",average);
}