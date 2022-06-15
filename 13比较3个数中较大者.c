#include <stdio.h>
main()
{
    int a, b, c, d;
    printf("enter three number:");
    scanf("%d,%d,%d", &a, &b, &c);
    d = max(a, b, c);
    printf("the max number is : %d\n", d);
}

max(int x, int y, int z)
{
    int m;
    if (x > y)
        m = x;
    else
        m = y;
    if (m > z)
        return (m);
    else
        m = z;
    return (m);
}