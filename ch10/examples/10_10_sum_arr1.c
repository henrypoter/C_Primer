/*************************************************************************
	> File Name: 10_10_sum_arr1.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 23 Jun 2014 10:36:40 PM CST
 ************************************************************************/

#include <stdio.h>

#define SIZE 10

int sum(int arr[], int n);

int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof(marbles));

    return 0;
}

int sum(int arr[], int n)
{
    int i;
    int total = 0;

    for (i = 0; i < n; i++)
    {
        total += arr[i];
    }
    printf("The size of arr is %zd bytes.\n", sizeof(arr));

    return total;
}
