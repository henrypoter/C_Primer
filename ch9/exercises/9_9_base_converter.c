/*************************************************************************
	> File Name: 9_9_base_converter.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sun 22 Jun 2014 04:09:37 PM CST
 ************************************************************************/

#include <stdio.h>

void to_base_n(unsigned long, unsigned int);

int main(void)
{
    unsigned long number;
    unsigned int base;
    printf("Enter an integer and the base(from 2 to 16) to convert (q to quit): \n");
    while (2 == scanf("%lu %u", &number, &base))
    {
        printf("Result:\n");
        to_base_n(number, base);
        putchar('\n');
    printf("Enter an integer and the base(from 2 to 16) to convert (q to quit): \n");
    }

    return 0;
}

void to_base_n(unsigned long n, unsigned int base)
{
    int r;
    r = n % base;
    if (n >= base)
    {
        to_base_n(n / base, base);
    }

    if (r >= 0 && r <= 9)
    {
    putchar('0' + r);
    }
    else if (r >= 10 && r <= 15)
    {
        putchar('A' + r - 10);
    }
    else
    {
        printf("Error base!");
    }
}
