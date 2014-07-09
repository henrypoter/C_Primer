/*************************************************************************
  > File Name: 11_10_display.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Tue 08 Jul 2014 11:19:23 AM CST
 ************************************************************************/

#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
#include <stdbool.h>

#define MAX_NUM 10
#define MAX_LEN 128

void get_string(char (*)[MAX_LEN], unsigned int *);
void display(const char (*)[MAX_LEN], const unsigned int);
void display_by_ascii(const char (*)[MAX_LEN], const unsigned int);
void display_by_length(const char (*)[MAX_LEN], const unsigned int);
void display_by_first_word_length(const char (*)[MAX_LEN], const unsigned int);
int get_option();

int main(void)
{
    char str[MAX_NUM][MAX_LEN]; 
    unsigned int num = 0;
    int option = 0;

    get_string(str, &num);
    do
    {
        option = get_option();
        switch (option) {
            case 1:
                display((const char (*)[MAX_LEN])str, num);
                break;
            case 2:
                display_by_ascii((const char (*)[MAX_LEN])str, num);
                break;
            case 3:
                display_by_length((const char (*)[MAX_LEN])str, num);
                break;
            case 4:
                display_by_first_word_length((const char (*)[MAX_LEN])str, num);
                break;
            case 5:
                get_string(str, &num);
                break;
            default:
                break;
        }
    } while (option != 6);

    return 0;
}

void get_string(char (*str)[MAX_LEN], unsigned int * num)
{
    *num = 0;
    puts("Please input some strings(EOF to quit)");
    __fpurge(stdin);
    while (*num < MAX_NUM && fgets(str[*num], MAX_LEN, stdin) != NULL)
    {
        str[*num][strlen(str[*num]) - 1] = '\0';
        (*num)++;
        __fpurge(stdin);
    }
}

void display(const char (*str)[MAX_LEN], const unsigned int num)
{
    unsigned int i = 0;

    for (i = 0; i < num; i++)
    {
        puts(str[i]);
    }
}

void display_by_ascii(const char (*str)[MAX_LEN], const unsigned int num)
{
    unsigned int order[MAX_NUM];
    unsigned int i = 0, j = 0, temp = 0;
    bool flag = false;

    for (i = 0; i < num; i++)
    {
        order[i] = i;
    }

    for (i = 0; i < num - 1; i++)
    {
        flag = false;
        for (j = 1; j < num - i; j++)
        {
            if (strcmp(str[order[j-1]], str[order[j]]) > 0)
            {
                temp = order[j];
                order[j] = order[j-1];
                order[j-1] = temp;
                flag = true;
            }
        }
        if (!flag)
        {
            break;
        }
    }

    for (i = 0; i < num; i++)
    {
        puts(str[order[i]]);
    }
}

void display_by_length(const char (*str)[MAX_LEN], const unsigned int num)
{
    unsigned int order[MAX_NUM];
    unsigned int i = 0, j = 0, temp = 0;
    bool flag = false;

    for (i = 0; i < num; i++)
    {
        order[i] = i;
    }

    for (i = 0; i < num - 1; i++)
    {
        flag = false;
        for (j = 1; j < num - i; j++)
        {
            if (strlen(str[order[j-1]]) > strlen(str[order[j]]))
            {
                temp = order[j];
                order[j] = order[j-1];
                order[j-1] = temp;
                flag = true;
            }
        }
        if (!flag)
        {
            break;
        }
    }

    for (i = 0; i < num; i++)
    {
        puts(str[order[i]]);
    }
}
void display_by_first_word_length(const char (*str)[MAX_LEN], const unsigned int num)
{
    unsigned int order[MAX_NUM];
    unsigned int i = 0, j = 0, temp = 0;
    bool flag = false;

    for (i = 0; i < num; i++)
    {
        order[i] = i;
    }

    for (i = 0; i < num - 1; i++)
    {
        flag = false;
        for (j = 1; j < num - i; j++)
        {
            char str1[MAX_LEN];
            char str2[MAX_LEN];
            sscanf(str[order[j-1]], "%s", str1);
            sscanf(str[order[j]], "%s", str2);
            if (strlen(str1) > strlen(str2))
            {
                temp = order[j];
                order[j] = order[j-1];
                order[j-1] = temp;
                flag = true;
            }
        }
        if (!flag)
        {
            break;
        }
    }

    for (i = 0; i < num; i++)
    {
        puts(str[order[i]]);
    }
}

int get_option()
{
    int option = 0;

    do
    {
        puts("Enter a number to choose an option:");
        puts("1.Displayed by original order");
        puts("2.Displayed by ASCII");
        puts("3.Displayed by string length descending");
        puts("4.Displayed by the first word length");
        puts("5.Re-enter a set of strings");
        puts("6.Quit");
        __fpurge(stdin);
    } while (1 != scanf("%d", &option) || option < 1 || option > 6);

    return option;
}
