/*************************************************************************
	> File Name: 9_15_swap3.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat 21 Jun 2014 09:54:32 PM CST
 ************************************************************************/

#include <stdio.h>

void interchange(int * u, int * v);

int main(void)
{
    int x = 5, y = 10;

    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(&x, &y);
    printf("Now x = %d and y = %d.\n", x, y);

    return 0;
}

void interchange(int * u, int * v)
{
    int temp;

    temp = *u;
    *u = *v;
    *v = temp;
}
