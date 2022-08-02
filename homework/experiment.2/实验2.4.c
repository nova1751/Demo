#include <stdio.h>
int main( )
{
    int m = 0;
    int i, j, x, s, k, flag = 0;
    for (x = 100; x <= 999; x++)
    {
        for (s = x, j = 1; j <= 3;j++,s=s/10)
            { if(s<=2){
                    flag = 0;
                    break;
            }
                    for (i = 2, k = s; i < k; i++)
                    {
                        if (s % i == 0)
                        {
                            flag = 1;
                            break;
                        }
                        else
                            flag = 0;
            }
        if(flag==0)
            break;
            }
        if (flag == 1) {
            printf("%d ", x);
            m++;
            if(m%30==0)
                printf("\n");
        }
}
return 0;
}