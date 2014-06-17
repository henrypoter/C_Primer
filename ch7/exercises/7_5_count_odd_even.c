/*************************************************************************
	> File Name: 7_5_count_odd_even.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 17 Jun 2014 11:22:14 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int odd = 0, even = 0;
    int odd_sum = 0, even_sum = 0;
    int num = 0;

    while ((1 == scanf("%d", &num)) && num != 0)
    {
        switch (num % 2)
        {
            case 0:
                even++;
                even_sum += num;
                break;
            case 1:
                odd++;
                odd_sum += num;
                break;
            default:
                printf("Invalid data!\n");
        }
    }
    printf("odd count: %d\t average: %.2f\n", odd, (float)odd_sum / odd);
    printf("even count: %d\t average: %.2f\n", even, (float)even_sum / even);

    return 0;
}
