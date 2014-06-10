/*************************************************************************
	> File Name: 3_4_toobig.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 10 Jun 2014 05:43:11 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int i = 2147483647;
    unsigned int j = 4294967295;

    printf("%d\t%d\t%d\n", i, i+1, i+2);
    printf("%u\t%u\t%u\n", j, j+1, j+2);

	return 0;
}
