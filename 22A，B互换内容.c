#include <stdio.h>
main()
{
    int a, b, c;
    a = 123;
    b = 456;
    printf("现在是  : A %d , B %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("交换后为: A %d , B %d\n", a, b);
}