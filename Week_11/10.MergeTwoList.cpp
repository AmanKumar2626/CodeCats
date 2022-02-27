//10.Merged two Linked List in a sorted 
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};
struct Node *head = NULL;
void create(struct Node **head,int num)
{
	struct Node *temp;
	temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = num;
	temp->next = *head;
	*head = temp;
}
void display(struct Node *head)
{
	struct Node *temp = head;
	while(temp)
	{
		printf("%d  ",temp->data);
	    temp=temp->next;	
	}
	printf("\n");
}
void merge(struct Node *p,struct Node *q)
{
    struct Node *last;
    if(p->data < q->data)
    {
        head=last=p;
        p=p->next;
        head->next=NULL;
    }
    else
    {
        head=last=q;
        q=q->next;
        head->next=NULL;
    }
    while(p && q)
    {
        if(p->data < q->data)
    {
        last->next=p;
        last=p;
        p=p->next;
        last->next=NULL;
    }
    else
    {
        last->next=q;
        last=q;
        q=q->next;
        last->next=NULL;
    }
   }
    if(p)last->next=p;
    if(q)last->next=q;
}
int main()
{
	struct Node *first=NULL,*second=NULL;
	int a[6] = {15,13,9,7,6,2};
	int b[4] = {17,10,2,1};
	for(int i=0;i<6;i++)
	create(&first,a[i]);
	printf("First list is :- ");
	display(first);

	for(int i=0;i<4;i++)
	create(&second,b[i]);
	printf("Seconf list is :- ");
	display(second);
	
	merge(first,second);
	printf("Merged list is :- ");
	display(second);
	return 0;
}