/*************************************************************************
	> File Name: 6_16_how_many_years.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 16 Jun 2014 03:49:40 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    double total = 100.0;
    int year = 0;

    while (total > 0)
    {
        total += total * 0.08;
        total -= 10.0;
        year++;
    }

    printf("After %d years, Chuckie's account will clear\n", year);

    return 0;
}
