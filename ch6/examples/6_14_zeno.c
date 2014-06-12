/*************************************************************************
	> File Name: 6_14_zeno.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 13 Jun 2014 01:13:01 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int t_ct;
    double time, x;
    int limit;

    printf("Enter the number of terms you want: ");
    scanf("%d", &limit);
    for (time = 0, x = 1, t_ct = 1; t_ct <= limit; t_ct++, x *= 2.0)
    {
        time += 1.0 / x;
        printf("time = %f when terms = %d.\n", time, t_ct);
    }

    return 0;
}
