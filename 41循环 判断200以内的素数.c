/*
质数又称素数。一个大于1的自然数，除了1和它自身外，不能被其他自然数整除的数叫做质数；否则称为合数（规定1既不是质数也不是合数）。
*/

#include <stdint.h>
#include <math.h>
main()
{
    int a, b, c, d, n = 0;
    printf("the prime number is : \n");
    for (a = 2; a <= 500; a++)
    {
        b = sqrt(a);
        for (c = 2; c <= b; c++)
            if (a % c == 0)
                break;
        if (c > b)
        {
            printf("%3d ", a);
            n++;
            if (n % 10 == 0)
                printf("\n");
        }
    }
}