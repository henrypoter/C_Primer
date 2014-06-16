/*************************************************************************
	> File Name: 6_10_print_integer_reversed_order.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 16 Jun 2014 01:08:15 PM CST
 ************************************************************************/

#include <stdio.h>

#define NUM 8

int main(void)
{
    int integer[NUM];
    int i = 0;

    printf("Please input %d integers:\n", NUM);
    for (i = 0; i < NUM; i++)
    {
        scanf("%d", &integer[i]);
    }
    for (i = NUM - 1; i >= 0; i--)
    {
        printf("%d ", integer[i]);
    }
    printf("\n");

    return 0;
}
