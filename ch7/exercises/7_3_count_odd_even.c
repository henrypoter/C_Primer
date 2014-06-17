/*************************************************************************
	> File Name: 7_3_count_odd_even.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 17 Jun 2014 10:06:42 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int odd = 0, even = 0;
    int odd_sum = 0, even_sum = 0;
    int num = 0;

    while ((1 == scanf("%d", &num)) && num != 0)
    {
        if (num % 2)
        {
            odd++;
            odd_sum += num;
        }
        else
        {
            even++;
            even_sum += num;
        }
    }
    printf("even count: %d\taverage: %.2f\n", even, (float)even_sum / even);
    printf("odd count: %d\taverage: %.2f\n", odd, (float)odd_sum / odd);

    return 0;
}
