/*************************************************************************
	> File Name: 11_21_copy1.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 21:48:49 2014
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define SIZE 40
#define LIM 5

int main(void)
{
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enter %d words beginning with q:\n", LIM);
    while (i < LIM && gets(temp))
    {
        if (temp[0] != 'q')
        {
            printf("%s doesn't begin with q!\n", temp);
        }
        else
        {
            strcpy(qwords[i], temp);
            i++;
        }
    }
    puts("Here are the words accepted: ");
    for (i = 0; i < LIM; i++)
    {
        puts(qwords[i]);
    }

    return 0;
}
