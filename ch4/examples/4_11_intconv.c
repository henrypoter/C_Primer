/*************************************************************************
	> File Name: 4_11_intconv.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 05:42:19 PM CST
 ************************************************************************/

#include <stdio.h>

#define PAGES 336
#define WORDS 65618

int main(void)
{
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
    printf("num as int and char: %d %c\n", num, num);
    printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);

    return 0;
}
