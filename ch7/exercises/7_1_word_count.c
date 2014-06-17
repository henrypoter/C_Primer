/*************************************************************************
	> File Name: 7_1_word_count.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 16 Jun 2014 11:18:27 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    char ch;
    int blank_cnt = 0;
    int line_cnt = 0;
    int char_cnt = 0;

    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case ' ':
                blank_cnt++;
                break;
            case '\n':
                line_cnt++;
            default:
                char_cnt++;
        }
    }
    printf("blank: %d\nline: %d\nchar: %d\n", blank_cnt, line_cnt, char_cnt);

    return 0;
}
