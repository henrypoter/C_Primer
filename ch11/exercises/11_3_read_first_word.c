/*************************************************************************
	> File Name: 11_3_read_first_word.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sun Jul  6 15:36:03 2014
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void read_first_word(char *);

int main(void)
{
    const unsigned int WORD_SIZE = 32;
    const unsigned int WORD_NUM = 128;

    char words[WORD_NUM][WORD_SIZE];
    unsigned int i = 0;

    for (i = 0; i < WORD_NUM && words[i][0] != '\0'; i++)
    {
        read_first_word(words[i]);
    }

    for (i = 0; i < WORD_NUM; i++)
    {
        puts(words[i]);
    }

    return 0;
}

void read_first_word(char * word)
{
    char line[128] = {0};
    unsigned int i = 0, j = 0;

    fgets(line, 128, stdin);

    while (line[i] != '\0')
    {
        if (!isspace(line[i]))
        {
            break;
        }
        i++;
    }
    
    if (line[i] == '\0')
    {
        word[0] = '\0';
    }
    else
    {
        while (line[i] != '\0')
        {
            if (isspace(line[i]))
            {
                word[j] = '\0';
                break;
            }
            word[j] = line[i];
            i++;
            j++;
        }
    }

    while (getchar() != '\n')
    {
        ;
    }
}
