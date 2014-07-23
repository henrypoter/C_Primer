/*************************************************************************
	> File Name: 13_5_append.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 21 Jul 2014 04:54:50 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 1024
#define SLEN 81

void append(FILE * source, FILE * dest);

int main(int argc, char * argv[])
{
    FILE *fa, *fs;
    int i = 0;

    if (argc < 3)
    {
        fprintf(stderr, "Usage: %s destination_file source_file [source file2] [...]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fa = fopen(argv[1], "w")) == NULL)
    {
        fprintf(stderr, "Can't open file %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }
    
    for (i = 2; i < argc; i++)
    {
        if (strcmp(argv[1], argv[i]) == 0)
        {
            fputs("Can't append file to itself\n", stderr); 
        }
        else if ((fs = fopen(argv[i], "r")) == NULL)
        {
            fprintf(stderr, "Can't open file %s.\n", argv[i]);
        }
        else
        {
            if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
            {
                fputs("Can't create input buffer\n", stderr);
                continue;
            }
            append(fs, fa);
            if (ferror(fs) != 0)
            {
                fprintf(stderr, "Error in reading file %s.\n", argv[i]);
            }
            if (ferror(fa) != 0)
            {
                fprintf(stderr, "Error in writing file %s.\n", argv[1]);
            }
            fclose(fs);
            printf("File %s appended.\n", argv[i]);
        }
    }
    printf("Done.");
    fclose(fa);

    return 0;
}

void append(FILE * source, FILE * dest)
{
    size_t bytes;
    static char temp[BUFSIZE];

    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
    {
        fwrite(temp, sizeof(char), bytes, dest);
    }
}
