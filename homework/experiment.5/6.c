#include<stdio.h>
#include<string.h>
void input(char str[][100],int score[],int n)
{
    for (int i = 0; i < n;i++)
    {
        scanf("%s", str[i]);
        scanf("%d", &score[i]);
    }
    printf("%d records were input!\n", n);
}
void sort(char str[][100],int score[],int n)
{
    int i, j, k, t;
    char buf[100];
    for (i = 0; i < n - 1;i++)
    {
        k = i;
        for (j = i + 1; j < n;j++)
        if(score[j]<=score[k])
            k = j;
        t = score[k];
        score[k] = score[i];
        score[i] = t;
        strcpy(buf, str[k]);
        strcpy(str[k], str[i]);
        strcpy(str[i], buf);
    }
            printf("Reorder finished!\n");
}
void output(char str[][100],int score[],int n)
{
    for (int i = 0; i < n;i++)
    {
        printf("%s", str[n-i-1]);
        printf(" %d\n", score[n-i-1]);
    }
}
void search(int key,int score[], int n,char str[][100])
{
    int low, high, mid,count=0;
    low = 0;
    high = n - 1;
    while(low<=high)
    {
        mid = (low + high) / 2;
    if(key==score[mid])
                {
                        count++;
                        printf("%s %d\n", str[mid], score[mid]);
                        break;
                }
    else if(score[mid]>key)
        high = mid - 1;
        else
        low=mid+1;
    }
        if(count==0)
            printf("not found!\n");
}
int main()
{
    int n,key,c;
    char str[100][100];
    int score[100];
    while(scanf("%d",&c),c)
    {
        switch(c)
        {
            case 1:
                scanf("%d", &n);
                    input(str, score, n);
                    break;
            case 2:
                sort(str, score, n);
                break;
            case 3:
                output(str, score, n);
                break;
            case 4:
                scanf("%d", &key);
                search(key, score, n,str);
                break;
        }
    }
    return 0;
}
