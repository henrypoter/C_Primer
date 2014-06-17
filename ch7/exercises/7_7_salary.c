/*************************************************************************
	> File Name: 7_7_salary.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 17 Jun 2014 11:47:59 AM CST
 ************************************************************************/

#include <stdio.h>

#define BASE 10.00
#define RATE 1.5
#define TAX_RATE1 0.15
#define TAX_RATE2 0.20
#define TAX_RATE3 0.25

int main(void)
{
    float hours = 0.0f;
    float salary = 0.0f;
    float tax = 0.0f;

    printf("Please input the hours: ");
    scanf("%f", &hours);
    
    if (hours > 40)
    {
        hours = (hours - 40) * (float)RATE + 40;
    }
    salary = (float)BASE * hours;
    if (salary <= 300)
    {
        tax = salary * (float)TAX_RATE1;
    }
    else if (salary <= 450)
    {
        tax = 300.0f * (float)TAX_RATE1 + (salary - 300.0f) * TAX_RATE2;
    }
    else
    {
        tax = 300.0f * (float)TAX_RATE1 + 150.0f * (float)TAX_RATE2 
            + (salary - 450.0f) * (float)TAX_RATE3;
    }
    
    printf("Salary: %.2f\n", salary);
    printf("Tax: %.2f\n", tax);
    printf("Net pay: %.2f\n", salary - tax);

    return 0;
}
