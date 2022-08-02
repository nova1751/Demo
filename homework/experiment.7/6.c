#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN sizeof(struct S)
struct S
{
    int num;
    char name[30];
    int En,Ma,Py,C;
    float aver,sum;
    struct S *next;
};
int n;
struct S *creat()
{
    int a;
    scanf("%d", &a);
    struct S *head, *p1 , *p2;
    n = 0;
    p1 = p2 = (struct S *)malloc(LEN);
    head = NULL;
    scanf("%d %s %d %d %d %d", &p1->num, &p1->name, &p1->En, &p1->Ma, &p1->Py, &p1->C);
    while(n<a-1)
    {
        n = n + 1;
        if(n==1)
            head = p1;
            else
                p2->next = p1;
            p2 = p1;
            p1 = (struct S *)malloc(LEN);
            scanf("%d %s %d %d %d %d", &p1->num, &p1->name, &p1->En, &p1->Ma, &p1->Py, &p1->C);
    }
    p2->next = p1;
    p1->next = NULL;
    printf("完成了%d位同学的成绩输入。\n", a);
    return (head);
}
void print(struct S *head)
{
    struct S *p;
    p = head;
    for (; p != NULL;p=p->next)
    {
         printf("%d %s %d %d %d %d\n", p->num, p->name, p->En, p->Ma, p->Py, p->C);
    }
}
void copy(struct S *p1)
{
    int a;
    scanf("%d", &a);
  scanf("%d %s %d %d %d %d", &(p1+a-1)->num, &(p1+a-1)->name, &(p1+a-1)->En, &(p1+a-1)->Ma, &(p1+a-1)->Py, &(p1+a-1)->C);
}
void aver(struct S *p1)
{
    struct S *p;
    p = p1;
    for (; p != NULL;p=p->next)
    {
        p->sum = p->C + p->En + p->Py + p->Ma;
        p->aver = p->sum / 4;
        printf("%d %s %.2f\n", p->num, p->name, p->aver);
    }
    
}
void print0(struct S *p1)
{
    float l;
    for (; p1 != NULL;p1=p1->next)
        printf("%d %s %d %.2f\n", p1->num, p1->name, p1->sum, p1->aver);
}
void sort(struct S *head)
{
    struct S *subhead,*p,*q,*temp,*p1=head,*p3,*p4=head,t;
    subhead = &t;
    int a = 0,b=0,i,j;
      for (; p4 != NULL;p4=p4->next)
    {
        p4->sum = p4->C + p4->En + p4->Py + p4->Ma;
        p4->aver = p4->sum / 4;
    }    
    while(p1)
    {
        a++;
        p1 = p1->next;
    }
    if(a==2)
    {
        if(head->aver>head->next->aver)
        {
            head->next->next = head;
            head = head->next;
            head->next->next = NULL;
        }
    }
    else
            for (j = 0; j < a - 1; j++)
            {
                 subhead->next = head;
                p = head;
                q = p->next;
                for (i = 0; i < a - 1 - j; i++)
                {
                    if (p->aver > q->aver)
                    {
                        subhead->next = p->next;
                        p->next = q->next;
                        q->next = p;
                        temp = p;
                        p = q;
                        q = temp;
                    }
    if(j==0&&i==0)
        head = p;
                    p = p->next;
                    q = q->next;
                    subhead = subhead->next;
                }
                subhead = &t;
            }
    p3 = head;
    for (; p3 != NULL;p3=p3->next)
        printf("%d %s %.2f\n", p3->num, p3->name, p3->aver);
}


int main()
{
    struct S *head;
  while(scanf("%d",&n),n)
  {
      switch(n)
      {
          case 1:
              head = creat();
              break;
          case 2:
              print(head);
              break;
          case 3:
              copy(head);
              break;
          case 4:
              aver(head);
              break;
          case 5:
              print0(head);
              break;
          case 6:
              sort(head);
              break;
      }
  }
  return 0;
}