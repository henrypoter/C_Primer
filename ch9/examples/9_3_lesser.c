/*************************************************************************
	> File Name: 9_3_lesser.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat 21 Jun 2014 08:40:43 PM CST
 ************************************************************************/

#include <stdio.h>

int imin(int, int);

int main(void)
{
    int evil1, evil2;

    printf("Enter a pair of integers (q to quit): \n");
    
    while (2 == scanf("%d %d", &evil1, &evil2))
    {
        printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
        printf("Enter a pair of integers (q to quit): \n");
    }
    printf("Bye.\n");

    return 0;
}

int imin(int n, int m)
{
    int min;
    
    if (n < m)
    {
        min = n;
    }
    else
    {
        min = m;
    }

    return min;
}
