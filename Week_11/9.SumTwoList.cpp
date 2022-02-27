//9.Sum of two linked list elements and make a new list of that resualtant list.
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
void Rdisplay(struct Node *head){
     	struct Node *temp = head;
	    if(temp==NULL)
	        return ;
		   
	      Rdisplay(temp->next);	
         printf("%d  ",temp->data);
}
void addTwoList(struct Node *one,struct Node *two, struct Node *sum)
{
	int s=0,c=0;
      while(one!=NULL && two!=NULL)
      {
      	s = c+ one->data + two->data;
      	c = s>9 ? 1: 0;
      	s%=10;
      	create(&sum,s);
      	one = one->next;
      	two = two ->next;
	  }     
	  while(one!=NULL)
	  {
	  	s=c+one->data;
	  	c = s > 9 ? 1: 0;
      	s%=10;
	  	create(&sum,s);
	  	one=one->next;
	  }
	  while(two!=NULL)
	  {
	  	s=c+two->data;
	  	c = s > 9 ? 1: 0;
      	s%=10;
	  	create(&sum,s);
	  	two=two->next;
	  }
	  if(c==1)
         create(&sum,1);
	   display(sum);
}
int main(void)
{
	struct Node* sum= NULL, *first = NULL, *second = NULL;
    int n1,n2;
    printf("Enter the number of elements in list 1.\n");
    scanf("%d",&n1);
    int a[n1];
    for(int i=0;i<n1;i++)
   	    scanf("%d",&a[i]);
    for(int i=0;i<n1;i++)
	create(&first,a[i]);
    printf("\nFirst List is :- ");
    Rdisplay(first);
    printf("\nEnter the number of elements in list 2.\n");
    scanf("%d",&n2);
    int b[n2];
    for(int i=0;i<n2;i++)
   	    scanf("%d",&b[i]);
    for(int i=0;i<n2;i++)
     create(&second,b[i]);
    printf("\nSecond List is :- ");
    Rdisplay(second);
    printf("\n Sum List is :-  ");
    addTwoList(first,second,sum); 
     
    return 0;
}