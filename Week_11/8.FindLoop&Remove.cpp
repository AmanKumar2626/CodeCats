//8.Checking Linked List there is a loop or not if loop present then remove loop
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL,*first=NULL;
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
int isLoop(struct Node *head)
{
	int pos = 1;
    if (head == NULL || head->next == NULL)
     { printf("No LOOP\n"); return 0;}
    struct Node *slow, *fast;
    slow = head->next;
    fast = head->next->next;

    while (fast && fast->next) {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (slow == fast)
    {
        slow = head;

          if(slow == fast) {
          	pos++;
              while(fast->next != slow) fast = fast->next;}
          else {
            while (slow->next != fast->next) {
                pos++;
				slow = slow->next;
                fast = fast->next;
            }
        }
    fast->next = NULL; 
    }
    return pos;
	}
int main()
{
    int a[5] = {2,5,1,7,3};
    for(int i=0;i<5;i++)
        create(a[i]);
    head->next->next->next->next->next = head->next->next;
    printf("The Loop is at %d position\n",isLoop(head));
    printf("The Loop is removed.\n");
    display();
    return 0;
}