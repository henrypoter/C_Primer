/*************************************************************************
  > File Name: 9_10_fibonacci.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Sun 22 Jun 2014 04:24:51 PM CST
 ************************************************************************/

#include <stdio.h>

unsigned long fibonacci(unsigned int);

int main(void)
{
    unsigned int n;

    printf("Please enter a positive integer: ");
    while (1 == scanf("%u", &n))
    {
        printf("Fibonacci(%u) = %lu\n", n, fibonacci(n));
        printf("Please enter a positive integer: ");
    }

    return 0;
}

unsigned long fibonacci(unsigned int n)
{
    unsigned long n_1 = 0, n_2 = 0, ret = 0;
    unsigned int i = 0;

    if (n <= 2)
    {
        return 1;
    }
    else
    {
        n_1 = 1;
        n_2 = 1;
        for (i = 3; i <= n; i++)
        {
            ret = n_1 + n_2;    
            n_1 = n_2;
            n_2 = ret;
        }
        return ret;
    }
}
