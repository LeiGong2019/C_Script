#include <stdio.h>
main()
{
    int a, b;
    a = 1;
    b = 2;
    while (b <= 5)
    {
        a = a * b;
        b = b + 1;
    }
    printf("%d", a);
}