/*************************************************************************
	> File Name: 2_4_print_prise_statement.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 10 Jun 2014 03:36:22 PM CST
 ************************************************************************/

#include <stdio.h>

void print_prise(void);

void print_end(void);

int main(void)
{
    print_prise();
    print_prise();
    print_prise();
    print_end();

	return 0;
}

void print_prise(void)
{
    printf("For he's a jolly  good fellow!\n");
}

void print_end(void)
{
    printf("Which nobody can deny!\n");
}
