/*************************************************************************
	> File Name: 10_3_int_array_max.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 24 Jun 2014 10:24:15 AM CST
 ************************************************************************/

#include <stdio.h>

#define SIZE 5

int max(const int [], const int);

int main(void)
{
    const int arr[SIZE] = {1, 4, 2, 7, 3};

    printf("Max: %d\n", max(arr, SIZE));

    return 0;
}

int max(const int arr[], const int size)
{
    int i = 0;
    int max_elem = 0;

    for (i = 0, max_elem = arr[0]; i < size; i++)
    {
        if (arr[i] > max_elem)
        {
            max_elem = arr[i];
        }
    }

    return max_elem;
}
