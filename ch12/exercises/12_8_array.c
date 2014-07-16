/*************************************************************************
  > File Name: 12_8_array.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Wed 16 Jul 2014 04:49:29 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int * make_array(int elem, int val);
void show_array(const int arr[], int n);

int main(void)
{
    int *pa;
    int size;
    int value;

    printf("Enter the number of elements: ");
    scanf("%d", &size);
    while (size > 0)
    {
        printf("Enter the initialization value: ");
        __fpurge(stdin);
        scanf("%d", &value);
        pa = make_array(size, value);
        if (pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("Enter the number of elements(<1 to quit): ");
        __fpurge(stdin);
        scanf("%d", &size);
    }
    printf("Done.\n");

    return 0;
}

int * make_array(int elem, int val)
{
    int * arr = (int *) malloc(elem * sizeof(int));
    printf("elem = %d\n", elem);
    while (elem-- > 0)
    {
        *(arr + elem) = val;
    }

    return arr;
}

void show_array(const int arr[], int n)
{
    int i = 0;

    for (i = 0; i < n; i++)
    {
        if (i % 8 == 0)
        {
            printf("\n");
        }
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
