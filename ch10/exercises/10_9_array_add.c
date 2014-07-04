/*************************************************************************
	> File Name: 10_9_array_add.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed Jul  2 20:45:02 2014
 ************************************************************************/

#include <stdio.h>

void add(const double [], const double [], double [], const unsigned int);

void print(const double [], const unsigned int);

int main(void)
{
    const unsigned int SIZE = 4;
    const double arr_a[SIZE] = {2, 4, 5, 8};
    const double arr_b[SIZE] = {1, 0, 4, 6};

    double result[SIZE];

    add(arr_a, arr_b, result, SIZE);
    print(result, SIZE);

    return 0;
}

void add(const double a[], const double b[], double result[], const unsigned int size)
{
    unsigned int i = 0;

    for (i = 0; i < size; i++)
    {
        result[i] = a[i] + b[i];
    }
}

void print(const double arr[], const unsigned int size)
{
    unsigned int i = 0;

    for (i = 0; i < size; i++)
    {
        printf("%8.2f", arr[i]);
    }
    printf("\n");
}
