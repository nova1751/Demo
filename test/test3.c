#include <malloc.h>
#include <stdio.h>
struct list
{
	int data;
	struct list *next;
};
struct list *creatlist()
{
	struct list *p, *q, *h;
	int a;
	h = (struct list *)malloc(sizeof(struct list));
	p = q = h;
	printf("Input an integer number,enter –1 to the end:\n");
	scanf("%d", &a);
	while (a != -1)
	{
		p = (struct list *)malloc(sizeof(struct list));
		p->data = a;
		q->next = p;
		q = p;
		scanf("%d", &a);
	}
	q->next = NULL;
	return (h);
}
void print(struct list *h)
{
	struct list *p = h->next;
	while (p != NULL)
	{
		printf("%d,", p->data);
		p = p->next;
	}
}
void main()
{
	struct list *h;
	h = creatlist();
	print(h);
}