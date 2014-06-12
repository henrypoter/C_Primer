/*************************************************************************
	> File Name: 5_13_addemup.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 04:25:47 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int count, sum;

    count = 0;
    sum = 0;
    while (count++ < 20)
    {
        sum = sum + count;
    }
    printf("sum = %d\n", sum);
    
    return 0;
}
