/*************************************************************************
	> File Name: 12_9_s_and_r.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 09 Jul 2014 11:10:16 PM CST
 ************************************************************************/

#include <stdio.h>

static unsigned long int next = 1;

int rand1(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65535) % 32768;
}

void srand1(unsigned int seed)
{
    next = seed;
}
