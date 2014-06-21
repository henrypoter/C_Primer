/*************************************************************************
	> File Name: 9_12_loccheck.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat 21 Jun 2014 09:45:21 PM CST
 ************************************************************************/

#include <stdio.h>

void mikado(int);

int main(void)
{
    int pooh = 2, bah = 5;

    printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In main(), bah  = %d and &bah = %p\n", bah, &bah);
    mikado(pooh);

    return 0;
}

void mikado(int bah)
{
    int pooh = 10;

    printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
}
