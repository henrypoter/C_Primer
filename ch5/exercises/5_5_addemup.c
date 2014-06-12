/*************************************************************************
	> File Name: 5_5_addemup.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 09:27:32 PM CST
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
        sum = sum + count;
    }
    printf("sum = %d\n", sum);

    return 0;
}
