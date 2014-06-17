/*************************************************************************
	> File Name: 7_6_count_ei.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 17 Jun 2014 11:38:22 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    const char cmp[] = "ei";
    char cur, pre;
    int cnt = 0;

    pre = ' ';
    while ((cur = getchar()) != '#')
    {
        if (pre == cmp[0] && cur == cmp[1])
        {
            cnt++;
        }
        pre = cur;
    }
    printf("Count of %s : %d\n", cmp, cnt);

    return 0;
}
