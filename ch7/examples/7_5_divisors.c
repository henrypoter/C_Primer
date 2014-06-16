/*************************************************************************
	> File Name: 7_5_divisors.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 16 Jun 2014 09:33:22 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned long num;
    unsigned long div;
    bool isPrime;

    printf("Please enter an integer for analysis: ");
    printf("Enter q to quit.\n");
    while (1 == scanf("%lu", &num))
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++)
        {
            if (0 == (num % div))
            {
                if ((div * div) != num)
                {
                    printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
                }
                else
                {
                    printf("%lu is divisible by %lu.\n", num, div);
                }
                isPrime = false;
            }
        }
        if (isPrime)
        {
            printf("%lu is prime.\n", num);
        }
        printf("Please enter another integer for analysis: ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}
