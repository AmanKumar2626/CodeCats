//1.Program to perform One Matrix operation. 
#include<iostream>
using namespace std;
#define row 3
#define col 3
int a[10][10];
int i,j;
void input();
void display();
void update();
void search();
void transpose();

int main()
{
	
	int choice;
    while(1)
	 {
	 	   	cout<<"\nChoose which one Matrix operation want to perform.\n\n";
	 	    cout<<"1.For input a matrix.\n";
	 		cout<<"2.For display a matrix.\n";
	 		cout<<"3.For update a matrix.\n";
	 		cout<<"4.for search an element.\n";
	 		cout<<"5.for transpose of an element.\n";
			cout<<"6.Exit().\n\n";
	 		cin>>choice;
	 		switch(choice)
	 		{
	 			case 1:
	 				input();
	 				break;
	 			case 2:
	 				display();
	 				break;
	 			case 3:
	 				update();
	 				break;
	 			case 4:
	 				search();
	 				break;
	 			case 5:
	 				transpose();
	 				break;
	 			case 6:
	 				exit(1);	
				default:
				    cout<<"Invalid choice.\n";
				    break;	
			 }
	 	   }
}
void input()
{
	cout<<"\nEnter the element of 3X3 matrix.\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
}
void display()
{
	cout<<"\nYour 3X3 matrix is ....\n\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[i][j]<<"\t";
		}
	     cout<<"\n\n";
	}
}
void update()
{
	int upd,r,c;
	display();
	cout<<"Which Element you want to update.\n";
	cin>>upd;
	cout<<"Enter the row and column where want to update.\n";
	cin>>r>>c;
     
    a[r-1][c-1]=upd;
    display();
}
void search()
{
	int src;
	display();
	cout<<"Enter element want to search.\n";
	cin>>src;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]==src)
			cout<<"The elment is present in "<<i+1<<" row and "<<j+1<<"Column.\n";
		}
	}
}
void transpose()
{
	display();
	cout<<"Transpose of the Matrix.\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[j][i]<<"\t";
		}
		cout<<"\n\n";
	}
}
