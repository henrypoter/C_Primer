/*************************************************************************
	> File Name: 10_4_day_mon2.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 23 Jun 2014 09:34:36 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
    int index;

    for (index = 0; index < sizeof(days) / sizeof(days[0]); index++)
    {
        printf("Month %2d has %d days.\n", index + 1, days[index]);
    }

    return 0;
}
