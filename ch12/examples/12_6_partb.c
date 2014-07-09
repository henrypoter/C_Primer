/*************************************************************************
	> File Name: 12_6_partb.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 09 Jul 2014 10:57:32 PM CST
 ************************************************************************/

#include <stdio.h>

extern int count;

static int total = 0;

void accumulate(int k)
{
    static int subtotal = 0;

    if (k <= 0)
    {
        printf("loop cycle: %d\n", count);
        printf("subtotal: %d; total: %d\n", subtotal, total);
        subtotal = 0;
    }
    else
    {
        subtotal += k;
        total += k;
    }
}
