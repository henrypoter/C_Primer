/*************************************************************************
	> File Name: 13_3_file_toupper.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 17 Jul 2014 11:09:35 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define FILENAME 64

int main(void)
{
    char src_file[FILENAME];
    char dest_file[FILENAME];
    FILE *fs, *fd;
    int ch;
    long count = 0;
    size_t pos;

    fputs("Enter the source file name: ", stdout);
    fgets(src_file, FILENAME, stdin);
    pos = strlen(src_file);
    if (pos > 0 && src_file[pos - 1] == '\n')
    {
        src_file[pos - 1] = '\0';
    }
    if ((fs = fopen(src_file, "r")) == NULL)
    {
        fprintf(stderr, "Can't open file %s.\n", src_file);
        exit(EXIT_FAILURE);
    }

    fputs("Enter the destination file name: ", stdout);
    fgets(dest_file, FILENAME, stdin);
    pos = strlen(dest_file);
    if (pos > 0 && dest_file[pos - 1] == '\n')
    {
        dest_file[pos - 1] = '\0';
    }
    if ((fd = fopen(dest_file, "w")) == NULL)
    {
        fprintf(stderr, "Can't open file %s.\n", dest_file);
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(fs)) != EOF)
    {
        fputc(toupper(ch), fd);
        count++;
    }
    fclose(fs);
    fclose(fd);
    printf("%ld characters have been copied to file %s from file %s.\n",
            count, dest_file, src_file);

    return 0;
}
