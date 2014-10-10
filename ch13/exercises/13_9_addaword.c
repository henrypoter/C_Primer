/*************************************************************************
	> File Name: 13_9_addaword.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 24 Jul 2014 03:49:49 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX 40

int main(void)
{
    FILE * fp;
    char words[MAX];
    int word_no = 1; 
    char perline[128];

    if ((fp = fopen("words", "a+")) == NULL)
    {
        fprintf(stderr, "Can't open \"words\" file.\n");
        exit(EXIT_FAILURE);
    }
    puts("Enter words to add to the file; press the enter");
    puts("key at the beginning of a line to terminate.");
    
    //get current word NO.
    while (fgets(perline, 128, fp) != NULL)
    {
        word_no++;
    }
    
    while (fscanf(stdin, "%s", words) == 1 && words[0] != '\n')
    {
        fprintf(fp, "%d %s\n", word_no, words);
        word_no++;
    }

    return 0;
}
