/*************************************************************************
	> File Name: 10_8_copy_variable_array.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed Jul  2 20:29:47 2014
 ************************************************************************/

#include <stdio.h>

void copy_variable_array(const unsigned int row, const unsigned int col, 
        double target[row][col], const double source[row][col]);

void print(const unsigned int row, const unsigned int col, const double arr[row][col]);

int main(void)
{
    const unsigned int ROW = 3;
    const unsigned int COL = 5;
    const double source[ROW][COL] = {
        {1.1, 1.2, 1.3, 1.4, 1.5},
        {2.1, 2.2, 2.3, 2.4, 2.5},
        {3.1, 3.2, 3.3, 3.4, 3.5}
    };

    double target[ROW][COL];

    copy_variable_array(ROW, COL, target, source);
    print(ROW, COL, target);

    return 0;
}

void copy_variable_array(const unsigned int row, const unsigned int col, 
        double target[row][col], const double source[row][col])
{
    unsigned int i = 0, j = 0;
    
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            target[i][j] = source[i][j];
        }
    }
}

void print(const unsigned int row, const unsigned int col, const double arr[row][col])
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
