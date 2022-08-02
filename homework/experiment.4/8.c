#include<stdio.h>
int x,y;             
char ch;             
int main(void)
{
	void func1(void);
	x = 10;
	y = 20;
	ch = getchar();
	printf("in file1 x=%d,y=%d,ch is %c\n", x, y, ch);
	func1();
	return 0;
}
void func1(void)
{
        x++;
        y++;
        ch++;
        printf("in file2 x=%d,y=%d,ch is %c\n",x,y,ch);
}


