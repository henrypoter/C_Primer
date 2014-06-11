/*************************************************************************
	> File Name: 4_13_prntval.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 11:45:44 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int bph20 = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph20);
    printf("The printf() function printed %d cahracters.\n", rv);
    
    return 0;
}
