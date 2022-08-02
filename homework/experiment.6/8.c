#include<stdio.h>
int main()
{
    void dec(int (*p)[100],int n,int m);
    int i, j,m,n, a[100][100]={0},(*p)[100];
    p = a;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n;i++)
        {
            for (j = 0; j < m;j++)
            scanf("%d", &a[i][j]);
        }
    dec(p,n,m);
    return 0;
}
void dec(int (*p)[100],int n,int m)
{
    int i = 0, j = m-1;
    for (; j >= 0;j--)
        {
            for (i=0; i  <n;i++)
            if(i==0)
                printf("%d", *(*(p + i) + j));
                else
                printf(" %d", *(*(p+i)+j));
            printf("\n");
        }
}