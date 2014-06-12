/*************************************************************************
	> File Name: 6_20_power.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 13 Jun 2014 01:32:38 AM CST
 ************************************************************************/

#include <stdio.h>

double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while (2 == scanf("%lf %d", &x, &exp))
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of number or q to quit.\n");
    }
    printf("Hope you enjoyed this poer trip -- bye!\n");

    return 0;
}

double power(double n, int p)
{
    double pow = 1.0;
    int i;

    for (i = 1; i <= p; i++)
    {
        pow *= n;
    }

    return pow;
}
