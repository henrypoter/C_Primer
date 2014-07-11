/*************************************************************************
  > File Name: 12_6_count_frequency_of_random_numbers.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Thu 10 Jul 2014 11:49:13 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <time.h>

void count_frequency(const int num, const int span);

int main(void)
{
    const int SPAN = 10;
    int num = 0;

    printf("Enter the number of random numbers: ");
    while (scanf("%d", &num) == 1)
    {
        count_frequency(num, SPAN);
        printf("Enter the number of random numbers: ");
    }

    return 0;
}

void count_frequency(const int num, const int span)
{
    int i = 0;
    int * temp = (int *) malloc(span * sizeof(int));
    memset(temp, 0, sizeof(int) * span);

    srand((unsigned int)time(NULL));

    for (i = 0; i < num; i++)
    {
        temp[rand() % span]++;
    }

    for (i = 0; i < span; i++)
    {
        printf("%d : %d\n", i, temp[i]);
    }

    free(temp);
}
