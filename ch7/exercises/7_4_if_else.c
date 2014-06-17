/*************************************************************************
	> File Name: 7_4_if_else.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 17 Jun 2014 10:15:39 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    char ch;
    int cnt1 = 0, cnt2 = 0;

    while ((ch = getchar()) != '#')
    {
        if ('.' == ch)
        {
            putchar('!');
            cnt1++;
        }
        else if ('!' == ch)
        {
            putchar('!');
            putchar('!');
            cnt2++;
        }
    }
    printf("\nthe times of '.' replaced by '!': %d\n", cnt1);
    printf("the times of '!' replaced by '!!': %d\n", cnt2);

    return 0;
}
