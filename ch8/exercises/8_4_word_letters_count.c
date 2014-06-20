/*************************************************************************
	> File Name: 8_4_word_letters_count.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 20 Jun 2014 03:38:46 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
    int word_cnt = 0, letter_cnt = 0;
    bool inword = false;
    char ch;

    while ((ch = getchar()) != EOF)
    {
       if (isalpha(ch))
       {
           if (!inword)
           {
               inword = true;
               word_cnt++;
           }
           letter_cnt++;
       }
       else
       {
           inword = false;
       }
    }
    printf("\n");
    printf("Words: %d\n", word_cnt);
    printf("Letters: %d\n", letter_cnt);
    printf("The average number of letters per word: %.1f\n", (float)letter_cnt / word_cnt);

    return 0;
}
