//2. Find Length of a Linked List by itearation method
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
 struct node * head = NULL;
 
void insertAtBeg(int num)
 {
    struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = num;
	if(head == NULL)
	{
		head = newnode;
		newnode -> link = NULL;
	}
	else 
	{
		newnode -> link = head;
		head = newnode;
		}	
 }
 void display()
{
	struct node *temp = head;
	if(temp==NULL)
	printf("List is Empty.\n");
	else{
	printf("\nList elements are.\n");
	while(temp!=NULL){
	printf("%d ",temp->data); 
	temp=temp->link;}
}}
int  length()
{
	int len=0;
	struct node *temp =head;
	if(temp == NULL)
	printf("List is empty.\n");
	else 
	{
		while(temp!=NULL)
		{
		  len++;
		  temp=temp->link;
		}
	}
	return len;
}
 int main()
 {
 	for(int i=1;i<=10;i++)
 	insertAtBeg(i);
 	display();
 	printf("\nLength of linked list is %d.\n",length());
 }