/*************************************************************************
	> File Name: 7_9_get_prime.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 17 Jun 2014 04:42:49 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int integer);

int main(void)
{
    int num = 0;
    int i = 0;

    printf("Please input a integer: ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

bool is_prime(int integer)
{
    int i = 0;
    for (i = 2; i * i <= integer; i++)
    {
        if (!(integer % i))
        {
            return false;
        }
    }
    return true;
}
