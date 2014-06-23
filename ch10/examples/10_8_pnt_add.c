/*************************************************************************
	> File Name: 10_8_pnt_add.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 23 Jun 2014 10:15:00 PM CST
 ************************************************************************/

#include <stdio.h>

#define SIZE 4

int main(void)
{
    short dates[SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;

    pti = dates;
    ptf = bills;
    printf("%23s %10s\n", "short", "double");
    for (index = 0; index < SIZE; index++)
    {
        printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
    }

    return 0;
}
