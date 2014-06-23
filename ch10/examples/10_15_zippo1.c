/*************************************************************************
	> File Name: 10_15_zippo1.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 23 Jun 2014 11:08:05 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int zippo[4][2] = { {2, 4}, {6, 8}, {1, 3}, {5, 7} };

    printf("zippo = %p, zippo + 1 = %p\n", zippo, zippo + 1);
    printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
    printf("*zippo = %p, *zippo + 1 = %p\n", *zippo, *zippo + 1);
    printf("zippo[0][0] = %d\n", zippo[0][0]);
    printf("**zippo = %d\n", *zippo[0]);
    printf("**zippo = %d\n", **zippo);
    printf("zippo[2][1] = %d\n", zippo[2][1]);
    printf("*(*(zippo + 2) + 1) = %d\n", *(*(zippo + 2) + 1));

    return 0;
}
