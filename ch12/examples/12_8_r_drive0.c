/*************************************************************************
	> File Name: 12_8_r_drive0.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 09 Jul 2014 11:07:57 PM CST
 ************************************************************************/

#include <stdio.h>

extern int rand0(void);

int main(void)
{
    int count;

    for (count = 0; count < 5; count++)
    {
        printf("%hd\n", rand0());
    }

    return 0;
}
