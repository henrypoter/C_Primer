/*************************************************************************
	> File Name: 6_13_get_double_sum.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 16 Jun 2014 03:18:18 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    const int SIZE = 8;
    double num[SIZE], sum[SIZE];
    int i = 0;
    double pre_sum = 0.0;

    for(i = 0; i < SIZE; i++)
    {
        scanf("%lf", &num[i]);
        sum[i] = pre_sum + num[i];
        pre_sum = sum[i];
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("%8.3f", num[i]);
    }
    printf("\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%8.3f", sum[i]);
    }
    printf("\n");

    return 0;
}
