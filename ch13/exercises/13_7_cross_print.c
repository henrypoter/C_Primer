/*************************************************************************
	> File Name: 13_7_cross_print.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 23 Jul 2014 11:17:37 AM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 1024

int main(int argc, char * argv[])
{
    FILE *fd1, *fd2;
    char buffer1[BUFSIZE];
    char buffer2[BUFSIZE];

    if (argc < 3)
    {
        fprintf(stderr, "Usage: %s file1 file2\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fd1 = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Can't open the file %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((fd2 = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Can't open the file %s.\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while (fgets(buffer1, BUFSIZE, fd1) != NULL && fgets(buffer2, BUFSIZE, fd2) != NULL)
    {
            fputs(buffer1, stdout);
            fputs(buffer2, stdout);
    }
    if (fgets(buffer1, BUFSIZE, fd1) != NULL)
    {
        fputs(buffer1, stdout);
    }
    if (fgets(buffer2, BUFSIZE, fd2) != NULL)
    {
        fputs(buffer2, stdout);
    }
    fclose(fd1);
    fclose(fd2);

    return 0;
}
