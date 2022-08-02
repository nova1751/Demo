#include<stdio.h>
int main()
{
    int dec(int n);
    int n;
    scanf("%d",&n);
    printf("%d", dec(n));
    return 0;
}
int dec(int n)
{
    if(n==1)
        return 1;
    if (n==2)
        return 2;
    else
        return dec(n - 1) + dec(n - 2);
}