/*************************************************************************
	> File Name: 10_12_number_set.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri Jul  4 16:32:43 2014
 ************************************************************************/

#include <stdio.h>

void get_number_set(const unsigned int num, const unsigned int size, 
        double number_set[num][size]);

double get_average(const double set[], const unsigned int size);

void average_of_per_set(const unsigned int num, const unsigned int size,
        const double number_set[num][size], double average[num]);

double average_of_all_set(const unsigned int num, const unsigned int size,
        const double number_set[num][size]);

double max_of_all_set(const unsigned int num, const unsigned int size,
        const double number_set[num][size]);

void display(const unsigned int num, const unsigned int size,
        const double number_set[num][size], const double average[num], 
        const double average_of_all, const double max_of_all);

int main(void)
{
    const unsigned int SIZE = 5;
    const unsigned int NUM = 3;

    double num_set[NUM][SIZE];
    double average[NUM];
    double average_of_all = 0.0;
    double max_of_all = 0.0;

    printf("Please enter %d number set, which has %d elements:\n", NUM, SIZE);
    get_number_set(NUM, SIZE, num_set);
    average_of_per_set(NUM, SIZE, num_set, average);
    average_of_all = average_of_all_set(NUM, SIZE, num_set);
    max_of_all = max_of_all_set(NUM, SIZE, num_set);

    display(NUM, SIZE, num_set, average, average_of_all, max_of_all);


    return 0;
}

void get_number_set(const unsigned int num, const unsigned int size, 
        double number_set[num][size])
{
    unsigned int i = 0, j = 0;

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%lf", &number_set[i][j]);
        }
    }
}

double get_average(const double set[], const unsigned int size)
{
    unsigned int i = 0;
    double sum = 0.0;
    
    for (i = 0; i < size; i++)
    {
       sum += set[i]; 
    }
   
    return sum / size;
}

void average_of_per_set(const unsigned int num, const unsigned int size,
        const double number_set[num][size], double average[num])
{
    unsigned int i = 0;

    for (i = 0; i < num; i++)
    {
        average[i] = get_average(number_set[i], size);
    }
}

double average_of_all_set(const unsigned int num, const unsigned int size,
        const double number_set[num][size])
{
    unsigned int i = 0, j = 0;
    double sum = 0.0;

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum += number_set[i][j];
        }
    }

    return sum / (num * size);
}

double max_of_all_set(const unsigned int num, const unsigned int size,
        const double number_set[num][size])
{
    unsigned int i = 0, j = 0;
    double max = number_set[0][0];

    for (i = 0; i < num; i++)
    {
        for (j = 0;j < size; j++)
        {
            if (number_set[i][j] > max)
            {
                max = number_set[i][j];
            }
        }
    }

    return max;
}

void display(const unsigned int num, const unsigned int size,
        const double number_set[num][size], const double average[num], 
        const double average_of_all, const double max_of_all)
{
    unsigned int i = 0, j = 0;

    printf("Number set:\n");
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%8.2f", number_set[i][j]);
        }
        printf("\n");
    }

    printf("Average of per set:\n");
    printf("%8s%8s%8s\n", "Set1", "Set2", "Set3");
    for (i = 0; i < num; i++)
    {
        printf("%8.2f", average[i]);
    }
    printf("\n");

    printf("Average of all set: %.2f\n", average_of_all);
    printf("Max of all set: %.2f\n", max_of_all);
}
