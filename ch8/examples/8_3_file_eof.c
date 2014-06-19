/*************************************************************************
	> File Name: 8_3_file_eof.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 19 Jun 2014 04:26:33 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    FILE * fp;
    char fname[50];

    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("Failed to open file. Bye\n");
        exit(1);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
