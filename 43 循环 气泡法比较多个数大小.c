/*  相邻的两个数比较，将小的调到前头*/

#include <stdio.h>
void main()
{
    int a[10];
    int b, c, d, e;
    printf("input 10 numbers:  \n");
    for (b = 0; b < 10; b++)
        scanf("%d", &a[b]);
    printf("\n");
    for (c = 9; c >= 0; c--)
    {
        for (d = 0; d < c; d++)
        {
            if (a[d] > a[d + 1])
            {
                e = a[d];
                a[d] = a[d + 1];
                a[d + 1] = e;
            }
        }
    }
    printf("the sorted number is : \n");
    for (b = 0; b < 10; b++)
        printf("%d ",a[b]);
}