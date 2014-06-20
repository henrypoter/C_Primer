/*************************************************************************
  > File Name: 8_5_guess_by_binary_search.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Fri 20 Jun 2014 05:08:48 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdio_ext.h>

int main(void)
{
    int low = 0, high = 100;
    int guess = (low + high) / 2;
    char ch;

    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with a y if my guess is right, "
            "with a l if my guess is less than yours "
            "and with a g if it is greater than yours.\n");

    printf("Uh...is your number %d?\n", guess);
    while ((ch = getchar()) != 'y')
    {
        __fpurge(stdin);
        if (ch == 'l')
        {
            low = guess;
        }
        else if (ch == 'g')
        {
            high = guess;
        }
        else
        {
            printf("Wrong respond! try again.i\n");
            printf("Well, then, is it %d?\n", guess);
            continue;
        }
        guess = (low + high) / 2;
        printf("Well, then, is it %d?\n", guess);
    }
    printf("I knew I could do it!\n");

    return 0;
}
