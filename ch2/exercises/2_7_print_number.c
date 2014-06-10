/*************************************************************************
	> File Name: 2_7_print_number.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 10 Jun 2014 03:53:15 PM CST
 ************************************************************************/

#include <stdio.h>

void one_three(void);
void two(void);

int main(void)
{
    printf("staring now:\n");
    one_three();
    printf("done!\n");

	return 0;
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

void two(void)
{
    printf("two\n");
}
