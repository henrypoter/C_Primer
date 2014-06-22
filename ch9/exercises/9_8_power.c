/*************************************************************************
	> File Name: 9_8_power.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sun 22 Jun 2014 03:10:43 PM CST
 ************************************************************************/

#include <stdio.h>

double power(double, int);

int main(void)
{
    double n = 0.0;
    int exp = 0;

    printf("Enter the base number and the exponent: ");
    scanf("%lf %d", &n, &exp);
    printf("%.3g to the power %d is %.5g\n", n, exp, power(n, exp));

    return 0;
}

double power(double n, int p)
{
    if (n == 0)
    {
        return 0.0;
    }
    if (p == 0)
    {
        return 1.0;
    }
    if (p > 0)
    {
        return n * power(n, p-1);
    }
    else
    {
        return (double)1 / n * power(n, p+1);
    }
}
