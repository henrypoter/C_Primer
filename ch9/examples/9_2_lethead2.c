/*************************************************************************
	> File Name: 9_2_lethead2.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat 21 Jun 2014 08:24:12 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define NAME "GIGATHINK, INC"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA, 94904"
#define WIDTH 40
#define SPACE ' '


void show_n_char(char ch, int num);

int main(void)
{
    int spaces;

    show_n_char('*', WIDTH);
    putchar('\n');
    
    spaces = (WIDTH - strlen(NAME)) / 2;
    show_n_char(SPACE, spaces);
    printf("%s\n", NAME);

    spaces = (WIDTH - strlen(ADDRESS)) / 2;
    show_n_char(SPACE, spaces);
    printf("%s\n", ADDRESS);

    spaces = (WIDTH - strlen(PLACE)) / 2;
    show_n_char(SPACE, spaces);
    printf("%s\n", PLACE);

    show_n_char('*', WIDTH);
    putchar('\n');

    return 0;
}

void show_n_char(char ch, int num)
{
    int count;

    for (count = 1; count <= num; count++)
    {
        putchar(ch);
    }
}
