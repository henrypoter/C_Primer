/*************************************************************************
	> File Name: 10_6_copy_two_dim_array.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: 二  7/ 1 15:53:54 2014
 ************************************************************************/

#include <stdio.h>


void copy_array(double target[], const double source[], const int size);

void copy_two_dim_array(const unsigned int row, const unsigned int col, double dest[row][col], const double src[row][col]);

void print(const unsigned int row, const unsigned int col, const double arr[row][col]);

int main(void)
{
    const unsigned int ROW = 5;
    const unsigned int COL = 5;
    const double src[ROW][COL] = {
        {1.1, 1.2, 1.3, 1.4, 1.5},
        {2.1, 2.2, 2.3, 2.4, 2.5},
        {3.1, 3.2, 3.3, 3.4, 3.5},
        {4.1, 4.2, 4.3, 4.4, 4.5},
        {5.1, 5.2, 5.3, 5.4, 5.5} };
    
    double dest[ROW][COL];

    copy_two_dim_array(ROW, COL, dest, src);

    print(ROW, COL, dest);

    return 0;
}

void copy_two_dim_array(const unsigned int row, const unsigned int col, double dest[row][col], const double src[row][col])
{
    unsigned int i = 0;

    for (i = 0; i < row; i++)
    {
        copy_array(dest[i], src[i], col);
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

void copy_array(double target[], const double source[], const int size)
{
    int i = 0;

    for (i = 0; i < size; i++)
    {
        target[i] = source[i];
    }
}
