/*************************************************************************
	> File Name: 10_2_copy_array_pointer.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 24 Jun 2014 10:05:54 AM CST
 ************************************************************************/

#include <stdio.h>

#define SIZE 5

void copy_array(const double [], double [], const int);
void copy_pointer(const double *, double *, const int);
void print(const double [], const int);

int main(void)
{
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[SIZE];
    double target2[SIZE];

    copy_array(source, target1, SIZE);
    copy_pointer(source, target2, SIZE);

    printf("Source Array:\n");
    print(source, SIZE);
    printf("Target1 Array:\n");
    print(target1, SIZE);
    printf("Target2 Array:\n");
    print(target2, SIZE);

    return 0;
}

void copy_array(const double source[], double target[], const int size)
{
    int i = 0;

    for (i = 0; i < size; i++)
    {
        target[i] = source[i];
    }
}

void copy_pointer(const double * source, double * target, const int size)
{
    const double * ptr;

    for (ptr = source; ptr < source + size; ptr++, target++)
    {
        *target = *ptr;
    }
}

void print(const double array[], const int size)
{
    int i = 0;

    for (i = 0; i < size; i++)
    {
        printf("%.2f\t", array[i]);
    }
    printf("\n");
}
