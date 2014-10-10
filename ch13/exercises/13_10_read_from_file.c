/*************************************************************************
	> File Name: 13_10_read_from_file.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 24 Sep 2014 05:15:35 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int pos = 0;
    FILE * fp;
    char filename[128];
    char buffer[512];

    //get the filename to read
    printf("Please enter the filename to read:\n");
    scanf("%s", filename);

    //open the file
    if ((fp = fopen(filename, "r")) == NULL)
    {
        fprintf(stdout, "Can't open the file %s!", filename);
        exit(EXIT_FAILURE);
    }

    printf("Please enter the position to read:");
    while (scanf("%d", &pos) == 1)
    {
        rewind(fp);
        if (fseek(fp, pos, SEEK_SET) == 0)
        {
            fgets(buffer, 512, fp);
            fprintf(stdout, "%s", buffer);
            printf("Please enter the next position:");
        }
        else
        {
            printf("Please enter the correct position:");
        }
    }
    fclose(fp);

    return 0;
}
