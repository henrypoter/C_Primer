/*************************************************************************
	> File Name: 12_5_parta.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 09 Jul 2014 10:52:49 PM CST
 ************************************************************************/

#include <stdio.h>

void report_count();
void accumulate(int k);
int count = 0;

int main(void)
{
    int value;
    register int i;

    printf("Enter a positive integer(0 to quit): ");
    while (scanf("%d", &value) == 1 && value > 0)
    {
        ++count;
        for (i = value; i >= 0; i--)
        {
            accumulate(i);
        }
        printf("Enter a positive integer(0 to quit): ");
    }
    report_count();
    
    return 0;
}

void report_count()
{
    printf("Loop executed %d times\n", count);
}
