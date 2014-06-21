/*************************************************************************
	> File Name: 9_7_factor.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat 21 Jun 2014 08:53:43 PM CST
 ************************************************************************/

#include <stdio.h>

long fact(int n);
long rfact(int n);

int main(void)
{
    int num;

    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12(q to quit):\n");
    while (1 == scanf("%d", &num))
    {
        if (num < 0)
        {
            printf("No negative numbers, please.\n");
        }
        else if (num > 12)
        {
            printf("Keep input under 13.\n");
        }
        else
        {
            printf("loop: %d factorial = %ld\n", num, fact(num));
            printf("recursion: %d factorial = %ld\n", num, rfact(num));
        }
        printf("Enter a value in the range 0-12(q to quit): \n");
    }
    printf("Bye.\n");

    return 0;
}

long fact(int n)
{
    long ans;

    for (ans = 1; n > 1; n--)
    {
        ans *= n;
    }

    return ans;
}

long rfact(int n)
{
    long ans;

    if (n > 0)
    {
        ans = n * rfact(n-1);
    }
    else
    {
        ans = 1;
    }

    return ans;
}
