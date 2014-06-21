/*************************************************************************
	> File Name: 9_1_lethead1.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat 21 Jun 2014 08:19:29 PM CST
 ************************************************************************/

#include <stdio.h>

#define NAME "GIGATHINK, INC"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void);

int main(void)
{
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();

    return 0;
}

void starbar(void)
{
    int count;

    for (count = 1; count <= WIDTH; count++)
    {
        putchar('*');
    }
    putchar('\n');
}
