/*************************************************************************
	> File Name: 5_4_squares.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 04:00:12 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int num = 1;

    while (num < 21)
    {
        printf("%4d %6d\n", num, num * num);
        num = num + 1;
    }

    return 0;
}
