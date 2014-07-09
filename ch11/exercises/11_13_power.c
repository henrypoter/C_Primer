/*************************************************************************
  > File Name: 11_13_power.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Wed 09 Jul 2014 08:02:06 PM CST
 ************************************************************************/

#include <stdio.h>

double power(double, int);

int main(void)
{
    double base;
    int exp;
    double ret;

    puts("Enter a double and a integer:");
    while (2 == scanf("%lf %d", &base, &exp))
    {
        ret = power(base, exp);
        printf("(%.3f)^(%d) = %.3f\n", base, exp, ret);
        puts("Enter a double and a integer:");
    }

    return 0;
}

double power(double base, int exp)
{
    double ret = base;
    int exponent = exp;

    if (base == 0)
    {
        return 0.0;
    }

    if (exp == 0)
    {
        return 1.0;
    }

    if (exp < 0)
    {
        exponent = -exp;
    }

    while (exponent-- > 1)
    {
        ret *= base;
    }

    return (exp > 0) ? ret : 1 / ret;
}
