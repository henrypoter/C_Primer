/*************************************************************************
	> File Name: 9_8_binary.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat 21 Jun 2014 09:22:59 PM CST
 ************************************************************************/

#include <stdio.h>

void to_binary(unsigned long n);

int main(void)
{
    unsigned long number;
    printf("Enter an integer (q to quit): \n");
    while (1 == scanf("%lu", &number))
    {
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit): \n");
    }
    printf("Done.\n");

    return 0;
}

void to_binary(unsigned long n)
{
    int r;

    r = n % 2;
    if (n >= 2)
    {
        to_binary(n / 2);
    }
    putchar('0' + r);

    return;
}
