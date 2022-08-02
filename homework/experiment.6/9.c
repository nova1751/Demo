#include<stdio.h>
int main()
{
    void dec (char (*p)[81]);
    char a[100][81]={'\0'}, (*p)[81];
    p = a;
    int i = 0;
    while(gets(a[i]))
    {
        dec(p + i);
        i++;
    }
    for (int j = 0; j < i;j++)
        printf("%s\n", *(p + j));
}
void dec (char (*p)[81])
{
    int i = 0,j;
    for (i = 0; i < 81;i++)
    {
        if(*(*p+i)==' ')
    {
        for (j=i; j < 80;j++)
            *(*p + j) = *(*p + j + 1);
        i--;
    }
    else
        break;
    }
    for (i = 0; i < 81;i++)
   {
       if(*(*p+i)=='\t')
   {
       for (j=i; j < 80;j++)
            *(*p + j) = *(*p + j + 1);
       i--;
   }
   }
}