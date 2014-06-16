/*************************************************************************
	> File Name: 6_9_square_sum.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 16 Jun 2014 12:54:35 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int min = 0, max = 0;
    int i = 0, sum = 0;
    
    printf("Enter lower and upper integer limits: ");
    while (2 == scanf("%d %d", &min, &max) && min < max)
    {
        sum = 0;
        for (i = min; i <= max; ++i)
        {
            sum += i * i;
        }
        printf("The sums of the squares from %d to %d is %d\n", min, max, sum);
        printf("Enter next set of limits: ");
    }
    printf("Done\n");

    return 0;
}
