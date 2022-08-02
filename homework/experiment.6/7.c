#include "stdio.h"
int main(void)
{	long x,k,i=0; 
scanf("%ld",&x);
	char *p=(char *)&x,a[10];       /*类型强制，x被视为4字节字符数组被p所指*/
	char up_half,low_half;    	/*up_half存高4位，low_half存低4位*/
	for(k=0;k<4;k++)
	{	low_half=(*p)&0x0f;   /*取低4位*/
		if(low_half<10)
		  low_half|='0';      	/*低4位二进制转换成ASCII码'0'-'9'*/
		else
		    low_half=(low_half-10)+'A';/*低4位二进制转换成ASCII码'A'-'F'*/
		up_half=(*p>>4)&0x0f; 	/*取高4位*/
		if(up_half<10)
		  up_half|='0';       	/*高4位二进制转换成ASCII码'0'-'9'*/
		else
		  up_half=(up_half-10)+'A';/*高4位二进制转换成ASCII码'A'-'F'*/
		p++;  	/*指向整型数x下一个字节*/
        a[i] = low_half;
        a[i + 1] = up_half;
        i += 2;
      }
      for (; i >= 0;i--)
          printf("%c", a[i]);

          return 0;
} 
