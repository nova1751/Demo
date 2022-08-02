#include <stdio.h>
void in(int a[], int n)
{
	int temp1, temp2, end, i, j;
	end = a[9];
	if (n > end)
		a[10] = n;
	else
	{
		for (i = 0; i < 10; i++)
		{
			if (a[i] > n)
			{
				temp1 = a[i];
				a[i] = n;
				for (j = i + 1; j < 11; j++)
				{
					temp2 = a[j];
					a[j] = temp1;
					temp1 = temp2;
				}
				break;
			}
		}
	}
}
void out(int a[])
{
	int i;
	for (i = 10; i >= 0; i--)
		printf("%d,", a[i]);
}
void main()
{
	int a[11] = {1, 4, 6, 9, 13, 16, 19, 28, 40, 100}, n;
	scanf("%d", &n);
	in(a, n);
	out(a);
}
