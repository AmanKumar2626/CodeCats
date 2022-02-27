//7.Remove Duplicates from Linked List
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};
  struct Node *head = NULL;
void create(int num)
{
	struct Node *temp;
	temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = num;
	temp->next = head;
	head = temp;
}
void display()
{
	struct Node *temp = head;
	while(temp)
	{
		printf("%d  ",temp->data);
	    temp=temp->next;	
	}
	printf("\n");
}
void removeDuplicate()
{
struct Node *p, *q, *prev=NULL, *temp;
 
    prev = p = q = head;
    q = q->next;
    while (p != NULL)
    {
        while (q != NULL && q->data != p->data)
        {
            prev = q;
            q = q->next;
        }
        if (q == NULL)
        {
            p = p->next;
            if (p != NULL)
            {
                q = p->next;
            }
        }
        else if (q->data == p->data)
        {
            prev->next = q->next;
            temp = q;
            q = q->next;
            free(temp);
        }
    }
}
int main()
{
	int a[10] = {2,9,2,7,6,9,5,1,2,1};
	for(int i=0;i<10;i++)
	create(a[i]);
	printf("Your List is :-    ");
	display();
	removeDuplicate();
	printf("\nAfter removing duplicate :- ");
	display();
	return 0;
}