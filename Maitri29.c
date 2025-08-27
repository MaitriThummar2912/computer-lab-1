#include<stdio.h>
int main()
{
    float net_sales,gross_sales,discount;
    printf("Enter the value of gross sales:");
    scanf("%f",&gross_sales);
    if(gross_sales>20000)
    {
        discount=0.15 * gross_sales;
    }
    else
    if(gross_sales>10000)
    {
        discount=0.1 * gross_sales;
    }
    else
    {
        discount=0.05 * gross_sales;
    }
    net_sales=gross_sales-discount;
    printf("gross_sales=%f\n",gross_sales);
    printf("discount=%f\n",discount);
    printf("net_sales=%f\n",net_sales);
}