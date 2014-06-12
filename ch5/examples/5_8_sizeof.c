/*************************************************************************
	> File Name: 5_8_sizeof.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 04:12:35 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int n = 0;
    size_t intsize;
    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes: all ints has %zd bytes.\n", n, sizeof(n), intsize);

    return 0;
}
