#include<stdio.h>
//删除assert宏定义
#define  R
int main(void)
{
    int integer_fraction(float x);
    float  r, s;
	int s_integer=0;
    printf ("Input a number: ");
    scanf("%f",&r);
    #ifdef  R
       s=3.14159*r*r;
       printf("Area of round is: %f\n",s);
       s_integer=integer_fraction(s);
       if((s-s_integer)>=0.5)
           s_integer++;
       //添加if从句达到四舍五入的目的    
       printf("The integer fraction of area is %d\n", s_integer);
    #endif
    return 0;
}

int integer_fraction(float x)
{
  int i=x;
  return i;
}
