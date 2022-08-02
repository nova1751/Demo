#include <stdio.h>
int main()
{
	int a[5][5],i,j;
	printf("请初始化数组:\n");
	for (i = 0; i < 5;i++)
		for (j = 0; j < 5;j++)
			scanf("%d", &a[i][j]);
	int sum1 = 0;
	for (i = 0; i < 5; i++)
		sum1 += a[0][i]+a[4][i];
	for (i = 1; i < 4;i++)
		sum1 += a[i][0]+a[i][4];
	printf("周边元素之和为：%d\n", sum1);
	int sum2 = 0;
	for (i = 0, j = 0; i < 5;i++,j++)
		sum2 += a[i][j];
	for (i = 0, j = 4; i < 5;i++,j--)
		sum2 += a[i][j];
	sum2 -= a[2][2];
	printf("对角线之和为：%d\n", sum2);
	int min = a[0][0];
	for (i = 0; i < 5;i++)
		for (j = 0; j < 5;j++)
		if(a[i][j]<min)
			min = a[i][j];
	printf("最小的元素为：%d\n", min);
	return 0;
}