/*************************************************************************
	> File Name: 13_13_denoising.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 10 Oct 2014 11:34:46 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define ROW_NUM 20
#define COL_NUM 30
#define DIM 10

void denoising(int buffer[ROW_NUM][COL_NUM]);

int main(void)
{
    FILE * fp_raw;
    FILE * fp_image;
    int digit = 0;
    int i = 0;
    int j = 0;
    char dim[DIM] = {' ', '.', ',', ':', ';', '~', '=', '*', '%', '#'};
    int buffer[ROW_NUM][COL_NUM];

    if ((fp_raw = fopen("raw.dat", "w+")) == NULL)
    {
        printf("Can't open file raw.dat!\n");
        exit(EXIT_FAILURE);
    }

    //encoding:generate random numbers
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

    //denoising
    if ((fp_raw = fopen("raw.dat", "r")) == NULL)
    {
        printf("Can't open file raw.dat!\n");
        exit(EXIT_FAILURE);
    }
    for (i = 0; i < ROW_NUM; i++)
    {
        for (j = 0; j < COL_NUM; j++)
        {
            fscanf(fp_raw, "%d", &buffer[i][j]);
        }
    }
    fclose(fp_raw);
    denoising(buffer);

    //decoding
    if ((fp_image = fopen ("image.dat", "w+")) == NULL)
    {
        printf("Can't open file image.dat!\n");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < ROW_NUM; i++)
    {
        for (j = 0; j < COL_NUM; j++)
        {
            //fprintf(fp_image, "%d ", buffer[i][j]);
            fprintf(fp_image, "%c ", dim[buffer[i][j]]);
        }
        fprintf(fp_image, "\n");
    }
    fclose(fp_image);

    return 0;
}

void denoising(int buffer[ROW_NUM][COL_NUM])
{
    int i = 0; 
    int j = 0;

    for (i = 0; i < ROW_NUM; i++)
    {
        for (j = 0; j < COL_NUM; j++)
        {
            int sum = 0;
            int cnt = 0;//记录周围有几个数字
            //按顺时针方向,将某个数字周围的8个位置
            //依次标记为:1, 2, 3, 4, 5, 6, 7, 8
            if (i - 1 >= 0)
            {
                if (j - 1 >= 0)
                {//1号位置
                    if (abs(buffer[i][j] - buffer[i-1][j-1]) > 1)
                    {
                        sum += buffer[i-1][j-1];
                        cnt++;
                    }
                    else
                    {
                        break;
                    }
                }
                //2号位置
                if (abs(buffer[i][j] - buffer[i-1][j]) > 1)
                {
                    sum += buffer[i-1][j];
                    cnt++;
                }
                else
                {
                    break;
                }
                if (j + 1 < COL_NUM)
                {//3号位置
                    if (abs(buffer[i][j] - buffer[i-1][j+1]) > 1)
                    {
                        sum += buffer[i-1][j+1];
                        cnt++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            if (j + 1 < COL_NUM)
            {//4号位置
                if (abs(buffer[i][j] - buffer[i][j+1]) > 1)
                {
                    sum += buffer[i][j+1];
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            if (i + 1 < ROW_NUM)
            {
                if (j + 1 < COL_NUM)
                {//5号位置
                    if (abs(buffer[i][j] - buffer[i+1][j+1]) > 1)
                    {
                        sum += buffer[i+1][j+1];
                        cnt++;
                    }
                    else
                    {
                        break;
                    }
                }
                //6号位置
                if (abs(buffer[i][j] - buffer[i+1][j]) > 1)
                {
                    sum += buffer[i+1][j];
                    cnt++;
                }
                else
                {
                    break;
                }
                if (j - 1 >= 0)
                {//7号位置
                    if (abs(buffer[i][j] - buffer[i+1][j-1]) > 1)
                    {
                        sum += buffer[i+1][j-1];
                        cnt++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            //8号位置
            if (j - 1 >= 0)
            {
                if (abs(buffer[i][j] - buffer[i+1][j-1]) > 1)
                {
                    sum += buffer[i+1][j-1];
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            printf("buffer[%d][%d] = %d ", i, j, buffer[i][j]);
            buffer[i][j] = (int) ((float) sum / cnt + 0.5F);
            printf("%d\n", buffer[i][j]);
        }
    }
}
