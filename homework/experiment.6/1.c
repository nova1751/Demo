#include<stdio.h>
char *strcopy(char *, const char *);
int main(void)
{
	char *s1, *s2, *s3,s_1[30],s_2[30],s_3[30];
    s1 = s_1;
    s2 = s_2;
    s3 = s_3;
    //定义指针变量后，应及时指定其指向
    printf("Input a string:\n");
    //没必要输入s2，下同
	scanf("%s", s2);
	strcopy(s1, s2);
	printf("%s\n", s1);
	printf("Input a string again:\n");
	scanf("%s", s2);
	s3 = strcopy(s1, s2);
	printf("%s\n", s3);
	return 0;
}

/*将字符串s复制给字符串t，并且返回串t的首地址*/
char * strcopy(char *t, const char *s)
{
    char *p = t;
    while((*t++ = *s++));
    //strcopy函数逻辑有误，且返回值不是t的首地址，下面作出修改
	return (p);
}
