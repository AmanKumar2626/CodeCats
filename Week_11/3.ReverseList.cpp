//3. Reverse A linked list.
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

void reverse()
{
    struct Node* previous = NULL;   
    struct Node* current = head;  
 
    while (current != NULL){
        struct Node* link = current->next;
 
        current->next = previous;   
 
        previous = current;
        current = link;
    }

    head = previous;
}
int main()
{
	int a[10] = {10,9,8,7,6,5,4,3,2,1};
	for(int i=0;i<10;i++)
	create(a[i]);
	display();
	reverse();
	display();
	return 0;
}