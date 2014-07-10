/*************************************************************************
	> File Name: 12_5_sort_random_numbers.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 10 Jul 2014 11:21:58 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SPAN 10

void generate_random(int [], const int);
void sort(int [], const int);
void display(const int [], const int);

int main(void)
{
    const unsigned int SIZE = 100;
    int num[SIZE];

    generate_random(num, SIZE);
    sort(num, SIZE);
    display(num, SIZE);

    return 0;
}

void generate_random(int num[], const int size)
{
    int i = 0;

    srand((unsigned int)time(NULL));

    for (i = 0; i < size; i++)
    {
        num[i] = rand() % SPAN;
    }
}

void sort(int num[], const int size)
{
    int i, j;
    bool flag = false;

    for (i = 0; i < size - 1; i++)
    {
        flag = false;
        for (j = 1; j < size - i; j++)
        {
            if (num[j-1] < num[j])
            {
                int temp = num[j-1];
                num[j-1] = num[j];
                num[j] = temp;
                flag = true;
            }
        }
        if (!flag)
        {
            break;
        }
    }
}
void display(const int num[], const int size)
{
    int i = 0;

    for (i = 0; i < size; i++)
    {
        printf("%-3d", num[i]);
        if (((i+1) % 10) == 0)
        {
            printf("\n");
        }
    }
}
