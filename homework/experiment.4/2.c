#include<stdio.h> 
int main(void)
{
	int max(int x, int y, int z);
	float sum(float x, float y);
	//调用相应函数应对函数作出声明
	int a, b, c;
  	float d, e;
  	printf("Input three integers:");
  	scanf("%d %d %d",&a,&b,&c);
  	printf("\nThe maximum of them is %d\n",max(a,b,c));

  	printf("Input two floating point numbers:");
	scanf("%f %f",&d,&e);
	printf("\nThe sum of them is  %f\n",sum(d,e));
	return 0;
}
	
int max(int x, int y, int z)					
{
	int m=z;
	if (x>y)
		{
			if(x>z) m=x;
		}
	//需添加花括号，否则会造成if语句过多导致，if else之间配对错误
	else
    	if(y>z) m=y;
    return m;
}

float sum(float x, float y)
{
	return x+y;
}
