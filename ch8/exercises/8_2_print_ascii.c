/*************************************************************************
	> File Name: 8_2_print_ascii.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 19 Jun 2014 10:19:50 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    char ch;
    int i = 0;

    while ((ch = getchar()) != EOF)
    {
        if (ch >= ' ')
        {
            printf("%-5c", ch);
        }
        else if (ch == '\n')
        {
            printf("%-5s", "\\n");
        }
        else if (ch == '\t')
        {
            printf("%-5s", "\\t");
        }
        else
        {
            printf("^%-4c", ch + 64);
        }
        printf("%-5d", ch);

        i++;
        if (i % 8 == 0)
        {
            i = 0;
            printf("\n");
        }
    }

    return 0;
}
