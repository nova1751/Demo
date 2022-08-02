#include<stdio.h>
void task0()
{
    printf("task0 is called!\n");
}
void task1()
{
    printf("task1 is called!\n");
}
void task2()
{
    printf("task2 is called!\n");
}
void task3()
{
    printf("task3 is called!\n");
}
void task4()
{
    printf("task4 is called!\n");
}
void task5()
{
    printf("task5 is called!\n");
}
void task6()
{
    printf("task6 is called!\n");
}
void task7()
{
    printf("task7 is called!\n");
}
int scheduler(char a[],void (*p[100])())
{
    int i;
 for ( i = 0; a[i] != '\0';i++)
    {
        switch(a[i])
        {
                case '0':
                p[i] = task0;
                break;
                case '1':
                p[i] = task1;
                break;
                case '2':
                p[i] = task2;
                break;
                case '3':
                p[i] = task3;
                break;
                case '4':
                p[i] = task4;
                break;
                case '5':
                p[i] = task5;
                break;
                case '6':
                p[i] = task6;
                break;
                case '7':
                p[i] = task7;
                break;
        }
    }
    return i;
}
void execute(void (*p[100])(),int i)
{
    int j;
    for (j = 0; j < i; j++)
        (*p[j])();
}
int main()
{
    int i;
    char a[100];
    void (*p[100])();
    gets(a);
    i=scheduler(a, p);
    execute(p, i);
    return 0;
}