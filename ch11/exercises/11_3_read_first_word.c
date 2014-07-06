/*************************************************************************
	> File Name: 11_3_read_first_word.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sun Jul  6 15:36:03 2014
 ************************************************************************/

#include <stdio.h>
#include <stdio_ext.h>
#include <ctype.h>

void read_first_word(char *);

int main(void)
{
    const unsigned int WORD_SIZE = 32;
    const unsigned int WORD_NUM = 128;

    char words[WORD_NUM][WORD_SIZE];
    unsigned int i = 0, cnt = 0;

    for (i = 0; i < WORD_NUM; i++)
    {
        read_first_word(words[i]);
        if (words[i][0] == '\0')
        {
            break;
        }
        cnt++;
    }

    for (i = 0; i < cnt; i++)
    {
        puts(words[i]);
    }

    return 0;
}

void read_first_word(char * word)
{
    char line[128] = {0};
    unsigned int i = 0, j = 0;

    //flush input buffer before read
    __fpurge(stdin);

    fgets(line, 128, stdin);

    //find the first non-space char
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
    
    //flush input buffer to clear the rest characters
    __fpurge(stdin);
}
