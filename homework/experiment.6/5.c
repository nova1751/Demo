# include<stdio.h>
# include<string.h>
int main (void)
{
char a[80], b[80], *result,*(*c[10])(char *,char *);
int choice;
while(1)
{
	do
	{
		printf("\t\t1 copy string.\n");
		printf("\t\t2 connect string.\n");
		printf("\t\t3 parse string.\n");
printf("\t\t4 exit.\n");
				printf("\t\tinput a number (1-4) please.\n");
				scanf("%d", &choice);
}while(choice<1 || choice>4);
c[1] = strcpy;
c[2] = strcat;
c[3] = strtok;
if(choice==4)
    goto down;
getchar();
printf("input the first string please!\n");
gets(a);
printf("input the second string please!\n");
gets(b);
result =c[choice](a, b);
printf("the result is %s\n", result);
}
	down:
	return 0;
}
