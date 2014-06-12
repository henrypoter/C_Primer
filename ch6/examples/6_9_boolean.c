/*************************************************************************
	> File Name: 6_9_boolean.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 13 Jun 2014 01:02:00 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;
    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");

    input_is_good = (1 == scanf("%ld", &num));
    while (input_is_good)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        input_is_good = (1 == scanf("%ld", &num));
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}
