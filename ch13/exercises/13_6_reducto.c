/*************************************************************************
	> File Name: 13_6_reducto.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 21 Jul 2014 10:08:55 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 64

int main(void)
{
    FILE *in, *out;
    int ch;
    char source_file[LEN];
    char dest_file[LEN];
    int pos;
    int count = 0;

    fputs("Enter the source file name: ", stdout);
    fgets(source_file, LEN, stdin);
    pos = strlen(source_file);
    if (pos > 0 && source_file[pos - 1] == '\n')
    {
        source_file[pos-1] = '\0';
    }
    if ((in = fopen(source_file, "r")) == NULL)
    {
        fprintf(stderr, "Can't open file %s.\n", source_file);
        exit(EXIT_FAILURE);
    }
    strcpy(dest_file, source_file);
    strcat(dest_file, ".red");
    if ((out = fopen(dest_file, "w")) == NULL)
    {
        fprintf(stderr, "Can't open the file %s.\n", dest_file);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(in)) != EOF)
    {
        if (count++ % 3 == 0)
        {
            putc(ch, out);
        }
    }
    if (fclose(in) != 0 || fclose(out) != 0)
    {
        fprintf(stderr, "Error in closing files.\n");
    }

    return 0;
}
