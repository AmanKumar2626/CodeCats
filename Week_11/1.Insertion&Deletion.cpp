//1.Insertion And deletion in Linked list.
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
void insertAtEnd(int num)
 {
 	struct node *newnode;
 	newnode = (struct node*)malloc(sizeof(struct node));
 	newnode->data = num;
 	newnode -> link = NULL;
 	if(head == NULL)
 		head = newnode;
	 else 
	 {
	 	struct node *temp = head;
	 	while(temp->link!=NULL)
	 	temp = temp->link;
	 	
	 	temp->link = newnode;
	 }
  } 
  
  void insertAtPos(int num)
  {
  		int pos;
  	struct node *newnode;
  	newnode = (struct node *)malloc(sizeof(struct node));
  	newnode->data = num;
  	if(head == NULL)
  	{
  		head = newnode;
  		newnode -> link = NULL;
	  }
	  else 
	  {
	  	printf("Enter position want to insert.\n");
 	    scanf("%d",&pos);
	  	struct node *temp =head;
	  	for(int i=1;(temp->link!=NULL) && (i < pos-1);i++)
	  	temp = temp->link;
	  	
	  	newnode -> link = temp->link;
	  	temp -> link = newnode;
	  }
  }
  void deleteAtBeg()
  {
  	if(head==NULL)
  		printf("List is Empty.\n");
	  else 
	  {
	  	struct node *temp = head;
	  	head =temp->link;
	  	free(temp);
	  	printf("Deleted the first node.\n");
	  }
  }
  void deleteAtEnd()
  {
  	if(head==NULL)
  		printf("List is Empty.\n");
  	else {
  		struct node *temp = head,*temp1;
  		if(head->link ==NULL)
  	    	head = NULL;
  	    else {
  	    	while(temp->link != NULL)
  	    	{
  	    		temp1 = temp;
  	    		temp = temp->link;
			  }
			  temp1->link =NULL;
		  }
		  free(temp);
		  printf("Deleted the last node.\n");
  }
}
void deleteAtPos()
{ 
        int pos;
		if(head==NULL)
  		printf("List is Empty.\n");
  		printf("Enter the position want to delete\n");
  		scanf("%d",&pos);
  		
  		struct node *temp = head;
  		if(pos==1)
  		 { head = head->link;
  		   free(temp);}
  		else 
  		{
  			for(int i=1;temp!=NULL && i<pos-1;i++)
  			   temp = temp->link;
  			if(temp==NULL)
  			printf("Position is not exixst.\n");
  			struct node *next;
  			next =temp->link;
  			temp->link =next->link;
  			free(next);
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
 int main()
 {
 	int num,ch;
 	while(1){
 	
 	printf("\nEnter your choice.\n");
 	printf("1. For Insert at begining.\n");
 	printf("2. For Insert at end.\n");
 	printf("3. For Insert at any position.\n");
 	printf("4. For Delete at begining.\n");
 	printf("5. For Delete at end.\n");
 	printf("6. For Delete at any position.\n");
 	printf("7. For Display.\n");
 	printf("8. For Exit.\n");
 	scanf("%d",&ch);
 	if(ch==1 || ch==2 || ch==3)
 	{
 		printf("Enter any number want to insert.\n");
 	    scanf("%d",&num);
	 }
 	switch(ch)
 	{
 		case 1:
        insertAtBeg(num);
        break;
        case 2:
        insertAtEnd(num);
 	    break;
	    case 3:
	    insertAtPos(num);
	    break;
	    case 4:
        deleteAtBeg();
        break;
        case 5:
        deleteAtEnd();
 	    break;
	    case 6:
	    deleteAtPos();
	    break;
	    case 7:
	    display();
	    break;
	    case 8:
	    	return 0;
	    default:
	    printf("Invalid Choice.\n");
	    
 }}}