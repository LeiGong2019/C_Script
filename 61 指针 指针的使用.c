#include <stdio.h>
void main()
{
    int a,b;
    int *pointer_1, *pointer_2;
/* 
指针变量相关的运算符有2个：
1、&：取地址运算符；
2、*: 指针运算符（或间接访问运算符），取其指向的内容； 

*/

    a = 100;
    b = 10;
    pointer_1 = &a;
    pointer_2 = &b;
/* 
这里的赋值，不能写成"*pointer_1=a"，
pointer_1表示指针变量，内容是地址； *pointer_1表示的是变量了，是pointer_1所指向的变量；
*/
    printf("%d,%d\n", a, b);
    printf("%d,%d\n",*pointer_1, *pointer_2);
}

/* 
脚本里面的 *pointer_1和*pointer_2 ，他们的含义不一样；
1、"int *pointer_1, *pointer_2;",这里的"*"只是表示pointer_1,pointer_2变量为指针变量；
2、printf里面的，*pointer_1和*pointer_2；  表示代表pointer_1,pointer_2所指向的变量；
 */