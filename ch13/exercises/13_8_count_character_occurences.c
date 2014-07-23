/*************************************************************************
	> File Name: 13_8_count_character_occurences.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 23 Jul 2014 03:51:35 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int cnt = 0;
    int ch, tmp;

    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s character [file1] [file2]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    ch = argv[1][0];
    if (argc == 2)
    {
        puts("Enter some characters(EOF to quit):");
        while ((tmp = getchar()) != EOF)
        {
            if (tmp == ch)
            {
                cnt++;
            }
        }
        printf("Standard Input\nCharacter: %c\nTimes: %d\n", ch, cnt);
    }
    if (argc > 2)
    {
        FILE * fp;
        int i = 0;

        for (i = 2; i < argc; i++)
        {
            cnt = 0;
            tmp = 0;
            if ((fp = fopen(argv[i], "r")) == NULL)
            {
                fprintf(stderr, "Can't open the file %s.\n", argv[i]);
                continue;
            }
            while ((tmp = fgetc(fp)) != EOF)
            {
                if (tmp == ch)
                {
                    cnt++;
                }
            }
            printf("File: %s\nCharacter: %c\nTimes: %d\n", argv[i], ch, cnt);
            fclose(fp);
        }
    }

    return 0;
}
