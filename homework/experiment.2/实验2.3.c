#include <stdio.h>
int main( )
{ 
int i, x, k, flag = 0;
printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
while (scanf("%d", &x) !=EOF) 
{
	i = 2;
	k = x;
	do
	{if(x==2)
		{
			flag = 0;
			break;}
			if (x % i == 0)
			{
				flag = 1;
				break;
	    }
		else
			flag = 0;
		i++;
	} while (i < k);
		if (flag == 1) printf("%d是合数\n", x);
else printf("%d不是合数\n", x);
}
return 0;
}