/*************************************************************************
	> File Name: 11_26_mod_str.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 22:51:46 2014
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIMIT 80

void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{
    char line[LIMIT];

    puts("Please enter a line: ");
    gets(line);
    ToUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n", PunctCount(line));

    return 0;
}

void ToUpper(char * str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

int PunctCount(const char * str)
{
    int ct = 0;

    while (*str)
    {
        if (ispunct(*str))
        {
            ct++;
        }
        str++;
    }

    return ct;
}
