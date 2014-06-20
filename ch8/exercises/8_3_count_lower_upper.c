/*************************************************************************
	> File Name: 8_3_count_lower_upper.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 19 Jun 2014 10:36:57 PM CST
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int lower_cnt = 0, upper_cnt = 0;

    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
        {
            lower_cnt++;
        }
        else if (isupper(ch))
        {
            upper_cnt++;
        }
    }
    printf("Lower: %d\n", lower_cnt);
    printf("Upper: %d\n", upper_cnt);
    return 0;
}
