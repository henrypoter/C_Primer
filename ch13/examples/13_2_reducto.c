/*************************************************************************
	> File Name: 13_2_reducto.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 17 Jul 2014 05:25:47 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 40

int main(int argc, char * argv[])
{
    FILE *in, *out;
    int ch;
    char name[LEN];
    int count = 0;

    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(1);
    }
    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
        exit(2);
    }
    strcpy(name, argv[1]);
    strcat(name, ".red");
    if ((out = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
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
        fprintf(stderr, "Error in closing files\n");
    }

    return 0;
}
