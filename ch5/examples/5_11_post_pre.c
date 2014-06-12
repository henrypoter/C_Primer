/*************************************************************************
	> File Name: 5_11_post_pre.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 04:19:55 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int a = 1, b = 1;
    int aplus, plusb;

    aplus = a++;
    plusb = ++b;
    printf("a aplus b plusb \n");
    printf("%1d %5d %5d %5d\n", a, aplus, b, plusb);

    return 0;
}
