/*************************************************************************
	> File Name: 5_6_add_square.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 09:30:40 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int count, sum, max;

    count = 0;
    sum = 0;
    printf("Please input the max: ");
    scanf("%d", &max);
    while (count++ < max)
    {
        sum = sum + count * count;
    }
    printf("sum = %d\n", sum);

    return 0;
}
