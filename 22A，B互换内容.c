#include <stdio.h>
main()
{
    int a, b, c;
    a = 123;
    b = 456;
    printf("������  : A %d , B %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("������Ϊ: A %d , B %d\n", a, b);
}