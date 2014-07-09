/*************************************************************************
	> File Name: 12_7_rand0.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 09 Jul 2014 11:05:58 PM CST
 ************************************************************************/

#include <stdio.h>

static unsigned long int next = 1;

int rand0(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}
