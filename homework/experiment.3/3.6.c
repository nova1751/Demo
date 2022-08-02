#include<stdio.h>
int main()
{
	int dec(int n);
	int i,j;
	for (i = 2; i <= 10000;i++)
if(dec(i))
	{
		printf("%d=", i);
		for (j = 1; j < i;j++)
		if(j==1)
			printf("1");
		else
		if(!(i%j))
			printf("+%d", j);
		printf("\n");
	}
}
int dec(int n)
{
	int i,flag,sum=0;
		for (i = 1; i < n;i++)
		if(n%i==0)
			sum += i;
		if(sum==n)
			flag = 1;
		else
			flag = 0;
		return flag;
}