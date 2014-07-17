/*************************************************************************
	> File Name: 13_3_addaword.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 17 Jul 2014 05:33:05 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX 40

int main(void)
{
    FILE * fp;
    char words[MAX];

    if ((fp = fopen("words", "a+")) == NULL)
    {
        fprintf(stdout, "Can't open \"words\" file.\n");
        exit(1);
    }
    puts("Enter words to add to the file; press the Enter");
    puts("key at the beginning of a line to terminate.");
    while (gets(words) != NULL && words[0] != '\0')
    {
        fprintf(fp, "%s ", words);
    }
    puts("File contents:");
    rewind(fp);
    while (fscanf(fp, "%s ", words) == 1)
    {
        puts(words);
    }
    if (fclose(fp) != 0)
    {
        fprintf(stderr, "Error closing file\n");
    }

    return 0;
}
