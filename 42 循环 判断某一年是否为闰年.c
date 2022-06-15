/*
闰年：
非整百年年份，可以被4整除，
整百年年份，可以被400整除的是闰年
*/

#include <stdio.h>
main()
{
    int year, leap;
    printf("enter the year number: ");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            leap = 1;
        else
            leap = 0;
    }
    else
    {
        if (year % 4 == 0)
            leap = 1;
        else
            leap = 0;
    }
    if (leap)
        printf("%d is ", year);
    else
        printf("%d is not ", year);
    printf("a leap year.\n");
}