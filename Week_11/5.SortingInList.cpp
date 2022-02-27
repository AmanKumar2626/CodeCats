//5. Sorting elements in a linked list
#include <stdio.h>
#include <stdlib.h>

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
	printf("Your List Elements is :-\n");
	while(temp)
	{
		printf("%d  ",temp->data);
	    temp=temp->next;	
	}
	printf("\n");
}
void sortingNodes()
{
	if(head==NULL)
	   printf("Empty List.\n");
	else if(head->next == NULL)
	   printf("Only one element.\n");
	else {
	struct Node  *slow = head, *fast= slow->next;
	while(fast!=NULL)
	{
		while(slow!=fast){
		if(slow->data > fast->data)
		{
			int swap = slow->data;
			slow->data = fast->data;
			fast->data = swap;
		}
		slow=slow->next;
	}
		fast = fast->next;
		slow = head;
	}	
    }
}
int main()
{
	int a[10] = {2,5,1,7,4,9,6,4,-2,0};
	for(int i=0;i<10;i++)
	create(a[i]);
	display();
	sortingNodes();
	display();
	return 0;
}