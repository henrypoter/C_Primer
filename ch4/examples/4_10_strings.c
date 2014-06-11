/*************************************************************************
	> File Name: 4_10_strings.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 05:36:33 PM CST
 ************************************************************************/

#include <stdio.h>

#define BLURB "Authentic imitation! "

int main(void)
{
    printf("/%2s/\n", BLURB);
    printf("/%24s/\n", BLURB);
    printf("/%24.5s/\n", BLURB);
    printf("/%-24.5s/\n", BLURB);

    return 0;
}
