/*************************************************************************
	> File Name: 10_7_special_copy.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed Jul  2 19:03:14 2014
 ************************************************************************/

#include <stdio.h>

void copy_array(double [], const double [], const unsigned int);

void print(const double [], const unsigned int);

int main(void)
{
    const unsigned int SIZE1 = 7;
    const unsigned int SIZE2 = 3;
    const double src[SIZE1]= {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};

    double dest[SIZE2];

    copy_array(dest, &src[2], SIZE2);
    print(dest, SIZE2);
    printf("\n");

    return 0;
}

void copy_array(double target[], const double source[], const unsigned int size)
{
    unsigned int i = 0;

    for (i = 0; i < size; i++)
    {
        target[i] = source[i];
    }
}

void print(const double arr[], const unsigned int size)
{
    unsigned int i = 0;
    for (i = 0; i < size; i++)
    {
        printf("%8.2f", arr[i]);
    }
}
