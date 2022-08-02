#include <stdio.h>
#define CHANGE 0
#define N  100
char main()
{
    char a[N],b[N]={0};
    int i;
    gets(a);
  #if CHANGE
  {
	  for(i=0;i<=N;i++)
  {

           if(a[i]>='a'&&a[i]<='z')
              b[i]=a[i]-32; 
           if(a[i]>='A'&&a[i]<='Z')
              b[i] = a[i] + 32;
           if(a[i]==' ')
              b[i] = a[i];
  } 
     puts(b);
  }
  #else
	puts(a);
#endif
}
