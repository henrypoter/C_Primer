/*************************************************************************
	> File Name: 10_5_designate.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 23 Jun 2014 09:38:01 PM CST
 ************************************************************************/

#include <stdio.h>

#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    int i;

    for (i = 0; i < MONTHS; i++)
    {
        printf("%2d %d\n", i + 1, days[i]);
    }

    return 0;
}
