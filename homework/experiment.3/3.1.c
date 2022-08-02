#include <stdio.h>
int main(void)
{
    long long sum_fac(int n);
    //调用函数前应先对函数作出声明,数字大小超过long整型的取值范围，故定义为双长型。
    int k;
    for(k=1;k<=20;k++)
         printf("k=%d\tthe sum is %lld\n",k,sum_fac(k));
        //printf函数中输出超过长整型取值范围，故需要用双长型输出
    return 0;
}
long long sum_fac(int n)
{
    long long s=0,fac=1;
    //sum_fachan函数中s与fac都必须定义为双长型，否则数据会溢出
    int i;
    //应对fac赋值为1
   for(i=1;i<=n;i++) {
       fac*=i;
       s+=fac;
    }
    //for语句需要加上花括号
    return s;
}
