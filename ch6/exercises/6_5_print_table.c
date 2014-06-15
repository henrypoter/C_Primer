/*************************************************************************
  > File Name: 6_5_print_table.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Mon 16 Jun 2014 12:23:52 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int low = 0, high = 0;
    int i = 0;

    printf("Please input the low and high: ");
    scanf("%d %d", &low, &high);

    printf("%10s %10s %10s\n", "integer", "square", "cube");
    for (i = low; i <= high; i++)
    {
        printf("%10d %10d %10d\n", i, i * i, i * i * i);
    }

    return 0;
}
