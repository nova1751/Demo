#include<stdio.h>
int main()
{
	int dec(int n);
	int k, i,o,q;
	while(scanf("%d", &k),k)
	{   if(k==0)
			break;
		int x = 1, y = 1;
		int b[111] = {0};
		o = 0;
		for (i = 1; i < k;i++)
			x *= 10;
		for (i = 0; i < k;i++)
			y *= 10;
		for (i = x; i < y;i++)
		if(dec(i))
		{
			b[o] = i;
			o++;
		}
		switch (k)
		{
    case 3:
	printf("%d位的水仙花数共有%d个", k, o);
	for (q = 0; q < o;q++)
	if(q==0)
		printf("%d", b[q]);
		else
			printf(",%d", b[q]);
	break;
	case 4:
	printf("%d位的四叶玫瑰数共有%d个", k, o);
	for (q = 0; q < o;q++)
	if(q==0)
		printf("%d", b[q]);
		else
			printf(",%d", b[q]);
	break;
	case 5:
	printf("%d位的五角星数共有%d个", k, o);
	for (q = 0; q < o;q++)
	if(q==0)
		printf("%d", b[q]);
		else
			printf(",%d", b[q]);
	break;
	case 6:
	printf("%d位的六合数共有%d个", k, o);
	for (q = 0; q < o;q++)
	if(q==0)
		printf("%d", b[q]);
		else
			printf(",%d", b[q]);
	break;
	case 7:
	printf("%d位的北斗星数共有%d个", k, o);
	for (q = 0; q < o;q++)
	if(q==0)
		printf("%d", b[q]);
		else
			printf(",%d", b[q]);
	break;
	case 8:
	printf("%d位的八仙数共有%d个", k, o);
	for (q = 0; q < o;q++)
	if(q==0)
		printf("%d", b[q]);
		else
			printf(",%d", b[q]);
	break;
		}
		printf("\n");
	}
	return 0;
}
int dec(int n)
{
int a[111]={0};           
int i=0,j,s,m=n,sum1=1,sum2=0,flag;
while(n!=0)
{
a[i]=n%10;             
n/=10;           
i++;          
}
for (j = 0; j < i;j++)
	{
		sum1 = 1;
		for (s = 0; s < i;s++)
		sum1 *= a[j];
		sum2 += sum1;
	}
if(sum2==m)
			flag = 1;
		else
			flag = 0;
		return flag;
}