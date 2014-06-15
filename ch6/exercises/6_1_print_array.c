/*************************************************************************
	> File Name: 6_1_print_array.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 13 Jun 2014 03:07:13 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    char letters[26] = {0};
    int i = 0;

    for (i = 0; i < 26; ++i)
    {
        letters[i] = i + 'A';
    }

    for (i = 0; i < 26; ++i)
    {
        printf("%c ", letters[i]);
    }
    printf("\n");

    return 0;
}
