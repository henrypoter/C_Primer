/*************************************************************************
	> File Name: 9_5_larger_of.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat 21 Jun 2014 11:34:37 PM CST
 ************************************************************************/

#include <stdio.h>

void larger_of(double *, double *);

int main(void)
{
    double a = 0.0, b = 0.0;

    printf("Please enter two double:\n");
    scanf("%lf %lf", &a, &b);
    larger_of(&a, &b);
    printf("After replace:\na = %.2f\nb = %.2f\n", a, b);

    return 0;
}

void larger_of(double * a, double * b)
{
    if (a > b)
    {
       *b = *a;
    }
    else
    {
        *a = *b;
    }
}
