

#include<stdio.h>

#include<stdlib.h>

#define NUM 100

int x[NUM];

int place(int k){//位置判断函数 

int i;

	for(i=1;i<k;i++)

	 if(x[i]==x[k]||abs(x[i]-x[k])==abs(i-k)) //是否在同一列或者在同一对角线 

	  return 1;

return 0;

	  

	  

}

 

 

int queen(int n)

{int count=0;

for(int i=1;i<=n;i++)//放置位置初始化 

    x[i]=0;

int k=1;//棋盘的行数

while(k>=1)

 {   x[k]=x[k]+1; //第一列 

   while(x[k]<=n&&place(k))

     x[k]=x[k]+1;// 下一列 

  

  if(x[k]<=n)//越界否 

  {

  	if(k==n) //摆完了 

	  {
		  count++;
	  } 

	  else //下一行 

	  {

	  	k++;

	  }

   } 

  else  //越界了回溯 

  {x[k]=0;

   k=k-1;

  }

 

 }

return count;	

}

 

 

int main(void)

{int n;

printf("\n");

scanf("%d",&n); 
if(queen(n)==0)
	printf("无解");
else

printf("%d\n",queen(n));

return 0;	

}