/*************************************************************************
	> File Name: 8_1_count_char.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 19 Jun 2014 09:19:10 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int cnt = 0;

    while (getchar() != EOF)
    {
        cnt++;
    }
    printf("Characters: %d\n", cnt);

    return 0;
}
