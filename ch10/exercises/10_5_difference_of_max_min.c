/*************************************************************************
	> File Name: 10_5_difference_of_max_min.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: 二  7/ 1 15:35:47 2014
 ************************************************************************/

#include <stdio.h>

double difference_of_max_and_min(double [], unsigned int);

int main(void)
{
    const unsigned int SIZE = 5;
    double arr[SIZE] = {1.1, 2.2, 5.5, 3.3, 0.2};

    printf("Difference of max and min: %.2f\n", difference_of_max_and_min(arr, SIZE));

    return 0;
}

double difference_of_max_and_min(double arr[], unsigned int size)
{
    unsigned int i = 0, max = 0, min = 0;

    for (i = 1; i < size; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
        else if (arr[i] < arr[min])
        {
            min = i;
        }
    }

    return arr[max] - arr[min];
}
