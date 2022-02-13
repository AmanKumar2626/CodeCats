//2.Program to perform 2 matrix basic operation.
#include<iostream>
using namespace std;
#define row 3
#define col 3
int a[10][10],b[10][10],c[10][10];
int i,j;
void input();
void display();
void add();
void subtract();
void multiply();

int main()
{
	
	cout<<"WELCOME ..\n";
	int choice;
    while(1)
	 {
	 	   	cout<<"\nChoose which two Matrix operation want to perform.\n\n";
	 	   	cout<<"1.For Input the both matrix.\n";
	 	   	cout<<"2.For display the both matrix.\n";
	 	   	cout<<"3.For Add two matrix.\n";
	 	   	cout<<"4.For Subtract two matrix.\n";
	 	   	cout<<"5.For multiply two matrix.\n";
	 	   	cout<<"6.For Exit.\n";
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
	 	   				add();
	 	   				break;
	 	   				
	 	   			case 4:
	 	   				subtract();
	 	   				break;
	 	   				
	 	   			case 5:
	 	   				multiply();
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
	cout<<"Enter the element of 1st matrix.\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the element of 2nd matrix.\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>b[i][j];
		}
	}
}
void display()
{
	cout<<"\nYour 1st matrix is ....\n\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[i][j]<<"\t";
		}
	     cout<<"\n\n";
	}
	cout<<"\nYour 2nd matrix is ....\n\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<"\n\n";
	}
}
void add()
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n\n";
	}
}
void subtract()
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		      	c[i][j]=a[i][j]-b[i][j];
			    cout<<c[i][j]<<"\t";	
		}
		cout<<"\n\n";
	}
}
void multiply()
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j] = 0;
			for(int k=0;k<col;k++)
			{
				
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("\n\nMultiplication of two matrix.\n\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<c[i][j]<<"\t";			
		}
	    cout<<"\n\n";
	}
}

