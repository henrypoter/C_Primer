/*************************************************************************
  > File Name: 6_11_series_sum.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Mon 16 Jun 2014 01:14:03 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int count = 0, sign = 0;
    double i = 0.0, sum1 = 0.0, sum2 = 0.0;

    printf("Please input the max times: ");

    while (1 == scanf("%d", &count) && count > 0)
    {
        sum1 = 0.0;
        sum2 = 0.0;
        for (i = 1.0, sign = 1; i < count; i++, sign *= -1)
        {
                sum1 += 1.0 / i;
                sum2 += sign * 1.0 / i;
        }
        printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 ... = %lf\n", sum1);
        printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 ... = %lf\n", sum2);
        printf("Please input the max times: ");
    }

    return 0;
}
