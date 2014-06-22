/*************************************************************************
  > File Name: 9_7_power.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Sun 22 Jun 2014 02:49:10 PM CST
 ************************************************************************/

#include <stdio.h>

double power(double, int);

int main(void)
{
    double n = 0.0;
    int p = 0;

    printf("Please enter the base number and the exponent: ");
    scanf("%lf %d", &n, &p);

    printf("%.3g to the power %d is %.5g\n", n, p, power(n, p));
    
    return 0;
}

double power(double n, int p)
{
    double result = n;
    int exp = 0;

    if (n == 0)
    {
        return 0.0;
    }

    if (p == 0)
    {
        return 1.0;
    }

    exp = (p > 0) ? p : (-p);

    while (--exp != 0)
    {
        result *= n;
    }

    return (p > 0) ? result : ((double)1 / result);
}
