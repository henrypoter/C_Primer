/*************************************************************************
	> File Name: 3_5_charcode.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 12:33:53 AM CST
 ************************************************************************/
/*
 * 功能：显示一个字符的编码
 */
#include <stdio.h>

int main(void)
{
    char ch;
    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("The code for %c is %d.\n", ch, ch);

	return 0;
}
