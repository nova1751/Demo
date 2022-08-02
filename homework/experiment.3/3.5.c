#include<stdio.h>
int main()
{
	int dec(int x);
	int i, y;
	while(scanf("%d", &y)!=EOF)
		for (i = 2; i < y - 1;i++)
		if(dec(i)==0&&dec(y-i)==0)
		{
			printf("%d=%d+%d\n",y,i,y-i);
			break;
		}
}
int dec(int x)
{
	int flag,i,k;
	if (x == 2)
		flag = 0;
for(i=2,k=x;i<k;i++)
		{if (!(x%i)) 
		{
			flag = 1;
			break;
	    }
		else
			flag = 0;
	    }
		return flag;
}