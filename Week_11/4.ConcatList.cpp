//4. Concatinating two Linked list.
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
void Concat(struct Node* first,struct Node *second)
{
	struct Node *ptr=first;
	while(ptr->next!=NULL)
	    ptr=ptr->next;
	ptr->next = second;
	second = NULL;
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
	
	Concat(first,second);
	printf("Concatinate list is :- ");
	display(first);
	return 0;
}