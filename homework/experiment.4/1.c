#include<stdio.h>
#define SUM (a+b)
#define DIF (a-b)
//为保证运算正确，宏定义时，应加上括号
#define SWAP(a, b) a = a + b, b = a - b,a=a-b
//对SWAP函数进行修改
int main() 
{
    int a,b;
    printf("Input two integers a, b:");
    scanf("%d%d", &a,&b);
    printf("\nSUM=%d\n the difference between square of a and square of b is:%d",SUM, SUM*DIF);
    SWAP(a,b);
    printf("\nNow a=%d,b=%d\n",a,b);
    return 0;
}
