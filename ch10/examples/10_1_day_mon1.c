/*************************************************************************
	> File Name: 10_1_day_mon1.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 23 Jun 2014 09:22:06 PM CST
 ************************************************************************/

#include <stdio.h>

#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++)
    {
        printf("Month %d has %2d days.\n", index + 1, days[index]);
    }
    
    return 0;
}
