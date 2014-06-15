/*************************************************************************
	> File Name: 6_6_print_word.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 16 Jun 2014 12:31:57 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[32] = {0};
    int i = 0;

    printf("Please input a word: ");
    scanf("%s", word);
    for (i = strlen(word) - 1; i >= 0; i--)
    {
        printf("%c", word[i]);
    }
    printf("\n");

    return 0;
}
