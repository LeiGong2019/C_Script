/*
三个塔座，A,B,C;
需要把A上的盘子，移动到C;
*/

# include <stdio.h>
void main()
{
    void hanoi(int a,char one ,char two,char three);
    int m;
    printf("intput the number of disk :  ");
    scanf("%d",&m);
    printf("the step to moving %d diskes : \n",m);
    hanoi(m,'A','B','C');
}

void hanoi(int n,char one ,char two,char three){
    //把盘中从 one A，移动到 three c，借助 two B；
    void move(char x ,char y);
    if(n==1)
    move(one,three);
    else {
        hanoi(n-1,one,three,two);
        //把盘子从one A，移动到two B，借助three C；
        move(one,three);
        hanoi(n-1,two,one,three);
        //把盘子从two B ，移动到three C，借助one A；
    }
}

void move(char x,char y){
    printf("%c --> %c \n",x,y);
}