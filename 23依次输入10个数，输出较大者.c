#include <stdio.h>
main()
{
    int a, b, c;
    a = 1;
    c = 0;
    while (a <= 10)
    {
        printf("�������%d����:  ", a);
        scanf("%d", &b);
        c = max(b, c);
        printf("Ŀǰ�����Ϊ:   %d\n\n", c);
        a = a + 1;
    }
}
max(int x, int y)
{
    int z;
    if (x > y)
        z = x;
    else
        z = y;
    return (z);
}