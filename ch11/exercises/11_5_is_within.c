/*************************************************************************
	> File Name: 11_5_is_within.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sun 06 Jul 2014 11:50:36 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <stdio_ext.h>

bool is_within(const char, const char *);


int main(void)
{
    const unsigned int LEN = 128;
    char str[LEN];
    char ch;

    while (true)
    {
        puts("Input a string:");
        __fpurge(stdin);
        fgets(str, LEN, stdin);
        puts("Input a char:");
        __fpurge(stdin);
        ch = getchar();

        if (is_within(ch, str))
        {
            puts("In!");
        }
        else
        {
            puts("Out!");
        }
    }
}

bool is_within(const char ch, const char * str)
{
    const char * ptr = str;

    while (*ptr != '\0')
    {
        if (*ptr == ch)
        {
            return true;
        }
        ptr++;
    }

    return false;
}
