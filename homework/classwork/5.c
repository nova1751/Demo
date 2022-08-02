#include<stdio.h>
int i,j,n,x,y;
int a[101][101];
int main()
{
 scanf("%d",&n);
 for(i=0;i<=n+1;i++)
 {
  for(j=0;j<=n+1;j++) 
  if(1<=i&&i<=n&&1<=j&&j<=n) a[i][j]=0;   
   else a[i][j]=1;
 }
 x=1;y=n/2+1;
 a[x][y]=1; 
 for(i=2;i<=n*n;i++)     
  {
  if(x==1&&y==n) x=2;   
  else
  {
        x--;y++;        
        if(x<1) x=n;   
        if(y>n) y=1;   
     if(a[x][y]>0) {x+=2;y--;}  
  }
     a[x][y]=i;   
 }
 for(i=1;i<=n;i++) 
 {
  for(j=1;j<n;j++) printf("%d ",a[i][j]);
  printf("%d\n",a[i][n]);
 }
 return 0;
}