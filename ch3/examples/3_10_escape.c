/*************************************************************************
	> File Name: 3_10_escape.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 11:11:57 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    float salary;
    printf("\aEnter your desired monthly salary: ");
    printf(" $______\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
    printf("\rGee!\n");

    return 0;
}
