#include<stdio.h>
int main()
{
    int a[32] = {0}, i;
    long long n;
    void dec(long long  n, int array[]);
    scanf("%lld", &n);
if(n>=0)
    dec(n, a);
else
{
    n = -n;
    dec(n, a);
    for (i = 0; i < 32;i++)
    if(a[i]==0)
        a[i] = 1;
        else
            a[i] = 0;
    for (n=0,i = 31; i >=0;i--)
    {
        n +=a[i];
        if(i!=0)
        n = n * 2;
    }
    n = n + 1;
    dec(n, a);
}
for (i = 31; i >= 0; i--)
    printf("%d", a[i]);
return 0;
}
void dec(long long n,int array[])
{
    int i;
    for (i=0; n != 0;i++)
    {
        array[i]= n % 2;
        n = n / 2;    
    }
}