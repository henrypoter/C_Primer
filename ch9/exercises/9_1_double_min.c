/*************************************************************************
	> File Name: 9_1_double_min.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat 21 Jun 2014 10:01:00 PM CST
 ************************************************************************/

#include <stdio.h>

double min(double, double);

int main(void)
{
    double x = 0.0, y = 0.0;

    printf("Please enter two double:\n");
    scanf("%lf %lf", &x, &y);

    printf("Min: %.2f\n", min(x, y));

    return 0;
}

double min(double x, double y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
