/*************************************************************************
	> File Name: 10_10_doubled_array.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed Jul  2 20:53:53 2014
 ************************************************************************/

#include <stdio.h>

void doubled_array(const unsigned int row, const unsigned int col,
        double arr[row][col]);

void print(const unsigned int row, const unsigned int col,
        double arr[row][col]);

int main(void)
{
    const unsigned int ROW = 3;
    const unsigned int COL = 5;

    double arr[ROW][COL] = {
        {1.1, 1.2, 1.3, 1.4, 1.5},
        {2.1, 2.2, 2.3, 2.4, 2.5},
        {3.1, 3.2, 3.3, 3.4, 3.5}
    };

    printf("Before doubled:\n");
    print(ROW, COL, arr);
    doubled_array(ROW, COL, arr);
    printf("After doubled:\n");
    print(ROW, COL, arr);
    
    return 0;
}

void doubled_array(const unsigned int row, const unsigned int col,
        double arr[row][col])
{
    unsigned int i = 0, j = 0;
    
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            arr[i][j] += arr[i][j];
        }
    }
}

void print(const unsigned int row, const unsigned int col,
        double arr[row][col])
{
    unsigned int i = 0, j = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%8.2f", arr[i][j]);
        }
        printf("\n");
    }
}
