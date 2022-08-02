#include <stdio.h>
int main(void)
{
    long long sum_fac(int n);
    int k;
    for(k=1;k<=20;k++)
         printf("k=%d\tthe sum is %lld\n",k,sum_fac(k));
    return 0;
}
long long sum_fac(int n)
{
    long long s,f=1;
    if(n==1)
        s = 1;
    else
    {        for (int i = 1; i <= n;i++)
        f = f * i;
       s = sum_fac(n - 1) + f;
    }
    return s;
}