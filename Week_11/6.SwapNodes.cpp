//6.Swap two nodes at a given position in a linked list.
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
}
void swapNode()
{
	struct Node *first = head;
	int x,y;
	printf("\nEnter the Position of 1st node and 2nd Node.\n");
	scanf("%d %d",&x,&y);
   if (x == y)
        return;
 
    // Search for x (keep track of prevX and CurrX
    struct Node *prevX = NULL, *currX = head;
    for(int i = 1;i < x; i++) {
        prevX = currX;
        currX = currX->next;
    }
 
    // Search for y (keep track of prevY and CurrY
    struct Node *prevY = NULL, *currY = head;
    for(int i=1;i < y;i++) {
        prevY = currY;
        currY = currY->next;
    }
 
    // If either x or y is not present, nothing to do
    if (currX == NULL || currY == NULL)
        return;
 
    // If x is not head of linked list
    if (prevX != NULL)
        prevX->next = currY;
    else // Else make y as new head
        head = currY;
 
    // If y is not head of linked list
    if (prevY != NULL)
        prevY->next = currX;
    else // Else make x as new head
        head = currX;
 
    // Swap next pointers
    struct Node* temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
}
int main()
{
	int a[10] = {10,9,8,7,6,5,4,3,2,1};
	for(int i=0;i<10;i++)
	create(a[i]);
	display();
	swapNode();
	display();
	return 0;
}