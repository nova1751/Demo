#include<stdio.h>
int Big(char a[10],char b[10])
{
    int i=0,j=0;
    for (; i < 10;i++)
    if(a[i]>b[i])
        j++;
    return j;
}
int Small(char a[10],char b[10])
{
    int i=0,j=0;
    for (; i < 10;i++)
    if(a[i]<b[i])
        j++;
    return j;
}
int Equal(char a[10],char b[10])
{
    int i=0,j=0;
    for (; i < 10;i++)
    if(a[i]==b[i])
        j++;
    return j;
}
char MaxSearch(char a[10])
{
    char m=a[0];
    for (int i = 0; i < 10;i++)
    if(a[i]>m)
        m = a[i];
    return m;
}
int main()
{
    char a[10], b[10];
    scanf("%s", a);
    scanf("%s", b);
    int i = Big(a, b),
        j = Small(a, b),
        k = Equal(a, b),
        c = MaxSearch(a),
        d = MaxSearch(b);
    printf("大于的次数：%d\t小于的次数：%d\t等于的次数%d\ta字符串中最大的元素：%c\ta字符串中最大的元素：%c\t",i,j,k,c,d);
    return 0;
}