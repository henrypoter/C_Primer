/*************************************************************************
	> File Name: 11_20_starsrch.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 21:43:18 2014
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define LISTSIZE 5

int main(void)
{
    char * list[LISTSIZE] = {
        "astronomy", "astounding",
        "astropysics", "ostracize",
        "asterism" };
    int count = 0;
    int i;

    for (i = 0;i < LISTSIZE; i++)
    {
        if (strncmp(list[i], "astro", 5) == 0)
        {
            printf("Found: %s\n", list[i]);
            count++;
        }
    }
    printf("The list contained %d words beginning"
            " with astro.\n", count);

    return 0;
}
