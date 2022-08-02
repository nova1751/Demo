#include <stdio.h>
int main( )
{ 
int i, x, k, flag = 0;
printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
while (scanf("%d", &x) !=EOF) 
{
for(i=2,k=x;i<k;i++)
        if(flag!=1)
        {if(x%i==0)
                flag = 1;
        else
            flag = 0;
        }
        if (flag == 1) printf("%d是合数\n", x);
        else printf("%d不是合数\n", x);
        
           flag = 0;
}
return 0;
}
