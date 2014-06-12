/*************************************************************************
	> File Name: 5_15_pound.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 04:30:05 PM CST
 ************************************************************************/

#include <stdio.h>

void pound(int n);

int main(void)
{
    int times = 5;
    char ch = '!';
    float f = 6.0;
    pound(times);
    pound(ch);
    pound((int)f);

    return 0;
}

void pound(int n)
{
    while (n-- > 0)
    {
        printf("#");
    }
    printf("\n");
}
