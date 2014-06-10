/*************************************************************************
	> File Name: 3_3_bases.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 10 Jun 2014 05:32:52 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int x = 100;
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

	return 0;
}
