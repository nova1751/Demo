#include<stdio.h>
int main()
{
    char u[]="UVWXYZ";
char v[]="xyz";
struct T{
	int x;
	char c;
	char *t;
}a[]={{11,'A',u},{100, 'B',v}},*p=a;
printf("%d\n", (++p)->x);
p = a;
printf("%c\n", (p++,p->c));
p = a;
printf("%c\n", (*p++->t,*p->t));
p = a;
printf("%c\n", *(++p)->t);
p = a;
printf("%c\n", *++p->t);
--p->t;
p = a;
//注意结构体数组a本身的变化
printf("%c\n", ++*p->t);
return 0;
}