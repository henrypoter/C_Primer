/*************************************************************************
	> File Name: 4_16_varwid.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 11:52:58 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("What field width?\n");
    scanf("%d", &width);
    printf("The number is: %*d: \n", width, number);
    printf("Now enter a width and a precision: \n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);

    return 0;
}
