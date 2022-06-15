#include <stdio.h>
void main()
{
    int n;
    void hanoi(int n,char source,char temp,char destination);
    printf("please input the number of disk : ");
    scanf("%d", &n);
    printf("the step to moving %d diskes : \n", n);
    hanoi(n,'A','B','C');
}

/*
每一次移动；比如从一个塔移动到第二个塔，步骤都是一样的；
1、先把上面 N-1 个塔，从第一个移动到临时的塔；
2、再把第N个disk，从第一个塔移动到 目标塔；
3、再从临时塔，把 N-1 disk从 第一个塔移动到目标塔；

跳出递归的前提，就是N为1的时候，是直接从第1个塔到 目标塔；
*/
void hanoi(int n,char source,char temp,char destination)
{
    if (n == 1)
        printf("%c --> %c\n",source,destination);
    else
    {
        hanoi(n-1,source,destination,temp);
        printf("%c --> %c\n",source,destination);
        hanoi(n-1,temp,source,destination);
    }
}