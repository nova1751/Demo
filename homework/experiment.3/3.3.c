#include<stdio.h>
double mulx(double x);
long fac(int n);
double sum(double x,int n)
{
	int i;
	double z=1.0;
	for(i=1;i<=n;i++)
	{
		z=z+mulx(x)/fac(i);
	}
	return z;
 } 
 double mulx(double x)
{
	static double z=1.0;
		z=z*x;
	return z;
 } 
 long fac(int n)
 {
 	static long h=1;
		h=h*n;
	return h; 	
 }
 int main()
 {
 	double x;
	int n;
	printf("Input x and n:");
	scanf("%lf%d",&x,&n);
	printf("The result is %lf:",sum(x,n));
	return 0;	  
 }
