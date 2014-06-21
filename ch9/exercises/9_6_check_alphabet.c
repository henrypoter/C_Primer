/*************************************************************************
	> File Name: 9_6_check_alphabet.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat 21 Jun 2014 11:41:21 PM CST
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>

int locate_alphabet(char);

int main(void)
{
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))
        {
            printf("The location of %c is %d.\n", ch, locate_alphabet(ch));
        }
    }

    return 0;
}

int locate_alphabet(char letter)
{
    if (islower(letter)) 
    {
        return letter - 'a' + 1;
    }
    else if (isupper(letter))
    {
        return letter - 'A' + 1;
    }
    else
    {
        return -1;
    }
}
