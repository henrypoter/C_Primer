/*************************************************************************
	> File Name: 12_14_dyn_arr.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 09 Jul 2014 11:40:57 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double * ptd;
    int max;
    int number;
    int i = 0;

    puts("What is the maximum number of type double entries?");
    scanf("%d", &max);
    ptd = (double *) malloc(max * sizeof(double));
    if (ptd == NULL)
    {
        puts("Memory allocation failed. Goodbye.");
        exit(EXIT_FAILURE);
    }
    puts("Enter the values (q to quit): ");
    while (i < max && scanf("%lf", &ptd[i]) == 1)
    {
        ++i;
    }
    printf("Here are your %d entries:\n", number = i);
    for (i = 0; i < number; i++)
    {
        printf("%7.2f ", ptd[i]);
        if (i % 7 == 6)
        {
            putchar('\n');
        }
    }
    if (i % 7 != 0)
    {
        putchar('\n');
    }
    puts("Done.");
    free(ptd);

    return 0;
}
