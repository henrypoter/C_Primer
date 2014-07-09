/*************************************************************************
	> File Name: 11_11_statistics.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 09 Jul 2014 03:45:41 PM CST
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    unsigned int word_cnt = 0;
    unsigned int upper_cnt = 0;
    unsigned int lower_cnt = 0;
    unsigned int punct_cnt = 0;
    unsigned int number_cnt = 0;
    char ch;
    bool inword = false;

    puts("Input some characters(EOF to quit):");
    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))
        {
            inword = true;
            if (isupper(ch))
            {
                upper_cnt++;
            }
            else if (islower(ch))
            {
                lower_cnt++;
            }
        }
        else
        {
            if (inword)
            {
                inword = false;
                word_cnt++;
            }
            if (ispunct(ch))
            {
                punct_cnt++;
            }
            else if (isdigit(ch))
            {
                number_cnt++;
            }
        }
    }

    printf("Words: %u\n", word_cnt);
    printf("Uppercase letters: %u\n", upper_cnt);
    printf("Lowercase letters: %u\n", lower_cnt);
    printf("Punctuations: %u\n", punct_cnt);
    printf("Numeric characters: %u\n", number_cnt);

    return 0;
}
