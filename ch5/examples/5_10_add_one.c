/*************************************************************************
	> File Name: 5_10_add_one.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 04:18:15 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int ultra = 0, super = 0;
    while (super < 5)
    {
        super++;
        ++ultra;
        printf("super = %d, ultra = %d\n", super, ultra);
    }

    return 0;
}
