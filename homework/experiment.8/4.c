#include "string.h"
#include "stdio.h"

void str_replace(char * cp, int n, char * str)
{
	int lenofstr;
	int i;
	char * tmp;
	lenofstr = strlen(str); 
	//str3比str2短，往前移动 
	if(lenofstr < n)  
	{
		tmp = cp+n;
		while(*tmp)
		{
			*(tmp-(n-lenofstr)) = *tmp; //n-lenofstr是移动的距离 
			tmp++;
		}
		*(tmp-(n-lenofstr)) = *tmp; //move '\0'	
	}
	else
	        //str3比str2长，往后移动
		if(lenofstr > n)
		{
			tmp = cp;
			while(*tmp) tmp++;
			while(tmp>=cp+n)
			{
				*(tmp+(lenofstr-n)) = *tmp;
				tmp--;
			}   
		}
	strncpy(cp,str,lenofstr);
}

int main()
{

   	char str1[1024]; 
	char str2[100],str3[100];	 
   	int i,len,count=0;
   	char c;
   	char *p;  	
   	scanf("%s",str2);
        scanf("%s",str3);
        //read string from news.txt
	freopen("experiment/src/step8/source.txt","r",stdin);
	i=0;
	c = getchar();
	while(c!=EOF)
	{
		str1[i] = c;
		i++;
		c = getchar();
	}
	str1[i]	= '\0';
	
	//开始查找字符串str2 
   	p = strstr(str1,str2);
   	while(p)
	{
		count++;
		//每找到一个str2，就用str3来替换 
		str_replace(p,strlen(str2),str3);
		p = p+strlen(str3);
		p = strstr(p,str2);
	}   	
   	printf("%d\n",count); 
	printf("%s",str1);        
}

