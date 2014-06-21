/*************************************************************************
	> File Name: 9_4_harmonic_mean.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat 21 Jun 2014 11:29:50 PM CST
 ************************************************************************/

#include <stdio.h>

double harmonic_mean(double, double);

int main(void)
{
    double a = 0.0, b = 0.0;

    printf("Please enter two double:\n");
    scanf("%lf %lf", &a, &b);
    printf("Harmonic mean: %.2f\n", harmonic_mean(a, b));

    return 0;
}

double harmonic_mean(double a, double b)
{
    return  2 / (1 / a + 1 / b);
}
