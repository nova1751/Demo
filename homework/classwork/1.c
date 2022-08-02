#include<stdio.h>
int main()
{
    void hanoi(int n, char one, char two, char three);
    int m;
    printf("请输入盘子的个数：\n");
    scanf("%d", &m);
    printf("移动盘子的步骤如下：\n");
    hanoi(m, 'A', 'B', 'C');
}
void hanoi(int n,char one,char two,char three)
{
    void move(char x, char y);
    if(n==1)
        move(one, three);
       else
       {
           hanoi(n - 1, one, three, two);
           move(one, three);
           hanoi(n - 1, two, one, three);
       } 
}
void move(char x,char y)
{
    printf("%c-->%c\n", x, y);
}