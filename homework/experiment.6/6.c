#include "stdio.h"
char *strcpy(char *,char *);
void main(void)
{
    char a[20],b[60]="there is a boat on the lake.";
    printf("%s\n",strcpy(a,b));

}
char *strcpy(char *s,char *t)
{
    char *p = s;
    while((*s++=*t++)!='\0')
    ;
    return (p);
    //while函数内部有错误，返回值应为s首字符地址
}
