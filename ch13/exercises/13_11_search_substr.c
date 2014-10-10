/*************************************************************************
	> File Name: 13_11_search_substr.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 24 Sep 2014 05:44:44 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    FILE * fp;
    char perline[512]={0};

    if (argc < 3)
    {
        printf("Usage:%s [substr] [filename]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[2], "r")) == NULL)
    {
        printf("Can't open the file %s!", argv[0]);
        exit(EXIT_FAILURE);
    }

    while (fgets(perline, 512, fp) != NULL)
    {
        if (strstr(perline, argv[1]) != NULL)
        {
            printf("%s", perline);
        }
    }
    fclose(fp);

    return 0;
}
