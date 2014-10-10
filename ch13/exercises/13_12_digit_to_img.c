/*************************************************************************
	> File Name: 13_12_digit_to_img.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 24 Sep 2014 06:02:17 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW_NUM 20
#define COL_NUM 30
#define DIM 10

int main(void)
{
    FILE * fp_raw;
    FILE * fp_image;
    int digit = 0;
    int i = 0;
    int j = 0;
    char dim[DIM] = {' ', '.', ',', ':', ';', '~', '=', '*', '%', '#'};

    if ((fp_raw = fopen("raw.dat", "w+")) == NULL)
    {
        printf("Can't open file raw.dat!\n");
        exit(EXIT_FAILURE);
    }

    srand(time(NULL));
    for (i = 0; i < ROW_NUM; i++)
    {
        for (j = 0; j < COL_NUM; j++)
        {
            digit = rand() % DIM;
            fprintf(fp_raw, "%d ", digit);
        }
        fprintf(fp_raw, "\n");
    }
    fclose(fp_raw); 

    if ((fp_raw = fopen("raw.dat", "r")) == NULL)
    {
        printf("Can't open file raw.dat!\n");
        exit(EXIT_FAILURE);
    }
    if ((fp_image = fopen ("image.dat", "w+")) == NULL)
    {
        printf("Can't open file image.dat!\n");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < ROW_NUM; i++)
    {
        for (j = 0; j < COL_NUM; j++)
        {
            fscanf(fp_raw, "%d", &digit);
            fprintf(fp_image, "%c ", dim[digit]);
        }
        fprintf(fp_image, "\n");
    }
    fclose(fp_raw);
    fclose(fp_image);

    return 0;
}
