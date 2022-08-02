#include<stdio.h>
#include<assert.h>
//程序需要打开stdio.h文件程序才能运行,assert宏定义也需要用include将assert.h文件包括进来
#define  R
int main(void)
{
    int integer_fraction(float x);
    //调用函数应先对函数做出声明
    float  r, s;
	int s_integer=0;
    printf ("Input a number: ");
    scanf("%f",&r);
    #ifdef  R
       s=3.14159*r*r;
       printf("Area of round is: %f\n",s);
       s_integer=integer_fraction(s);
       assert((s-s_integer)<0.5);
       printf("The integer fraction of area is %d\n", s_integer);
    #endif
    return 0;
}

int integer_fraction(float x)
{
  int i=x;
  return i;
}
