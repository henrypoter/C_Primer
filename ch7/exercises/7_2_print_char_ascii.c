/*************************************************************************
	> File Name: 7_2_print_char_ascii.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 17 Jun 2014 09:56:08 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;

    while ((ch = getchar()) != '#')
    {
        count++;
        printf("%c/%-5d", ch, ch);
        if (0 == (count % 8))
        {
            printf("\n");
            count = 0;
        }
    }
    printf("\n");

    return 0;
}
