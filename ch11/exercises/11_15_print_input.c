/*************************************************************************
  > File Name: 11_15_print_input.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Wed 09 Jul 2014 08:38:07 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    const unsigned int SIZE = 1024;
    char str[SIZE];
    char ch;
    unsigned int cnt = 0;
    char option[16];

    puts("Enter some string(EOF to quit):");
    while ((ch = getchar()) != EOF)
    {
        str[cnt] = ch;
        cnt++;
    }
    while (true)
    {
        puts("\nChoose a option:");
        puts("-p:Displayed by original");
        puts("-u:Displayed by uppercase");
        puts("-l:Displayed by lowercase");
        puts("-r:Re-enter some string");
        puts("-q:Quit");

        fgets(option, 16, stdin);
        option[strlen(option) - 1] = '\0';

        if (strcmp(option, "-p") == 0)
        {
            unsigned int i = 0;
            for (i = 0; i < cnt; i++)
            {
                putchar(str[i]);
            }
        }
        else if (strcmp(option, "-u") == 0)
        {
            unsigned int i = 0;
            for (i = 0; i < cnt; i++)
            {
                putchar(toupper(str[i]));
            }
        }
        else if (strcmp(option, "-l") == 0)
        {
            unsigned int i = 0;
            for (i = 0; i < cnt; i++)
            {
                putchar(tolower(str[i]));
            }
        }
        else if (strcmp(option, "-r") == 0)
        {
            puts("Enter some string(EOF to quit):");
            while ((ch = getchar()) != EOF)
            {
                str[cnt] = ch;
                cnt++;
            }
        }
        else if (strcmp(option, "-q") == 0)
        {
            break;
        }
    }

    return 0;
}
