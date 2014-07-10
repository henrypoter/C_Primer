/*************************************************************************
	> File Name: 12_4_func_call_times.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 10 Jul 2014 10:42:39 PM CST
 ************************************************************************/

#include <stdio.h>

int func(int);

int main(void)
{
    int num = 0;

    while (scanf("%d", &num) == 1)
    {
        printf("The function has call %d times.\n", func(num));
    }

    return 0;
}

int func(int num)
{
    static int cnt = 0;
    int ret = 0;

    cnt++;
    num = num / 2;
    
    if (num == 0)
    {
        ret = cnt;
        cnt = 0;
        return ret;
    }

    return func(num);
}
