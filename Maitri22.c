#include<stdio.h>
int main()
{
    float net_sales,gross_sales;
    printf("Enter gross sales:");
    scanf("%f",&gross_sales);
    net_sales = gross_sales - (0.1*gross_sales);
    printf("net_sales = %f",net_sales);
}