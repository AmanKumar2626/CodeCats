//9. Program to Interchange any two Rows & Columns in the given Matrix
#include <iostream>
using namespace std;
static int array[10][10];
int row,col;
void display();
void exchange_row();
void exchange_col();
int main()
{
    int choice;
 
    cout<<"Enter the row and column of the matrix \n";
    cin>>row>>col;
    cout<<"Enter the co-efficents of the matrix \n";
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            cin>>array[i][j];
    }
    display();
    while(1)
    {
    	cout<<"\n\nChoose any option.\n";
    	cout<<"1. For exchange rows.\n";
    	cout<<"2. For exchange columns.\n";
    	cout<<"3. Exit.\n";
    	cin>>choice;
    	
    	switch(choice)
    	{
    		case 1:
    			exchange_row();
    			break;
    		case 2:
    			exchange_col();
    			break;
    		case 3:
    			exit(0);
    		default:
			    cout<<"Invalid Choice.\n";
				break;
		}
	}
}
void display()
{
	cout<<"\nThe given matrix is \n";
    for (int i = 0; i < row; ++i)
      {
        for (int j = 0; j < col; ++j)
            cout<<array[i][j]<<"\t";
        cout<<"\n\n\n";
    }
}	
void exchange_row(){
	int r1,r2,swap;
    cout<<"Enter the numbers of two rows to be exchanged \n";
    cin>>r1>>r2;
    for (int i = 0; i < col; ++i)
    {
        swap = array[r1 - 1][i];
        array[r1 - 1][i] = array[r2 - 1][i];
        array[r2 - 1][i] = swap;
    }
    display();
}

void exchange_col(){
	int c1,c2,swap;
    cout<<"Enter the numbers of two columns to be exchanged \n";
    cin>>c1>>c2;

    for (int i = 0; i < row; ++i)
    {
        swap = array[i][c1 - 1];
        array[i][c1 - 1] = array[i][c2 - 1];
        array[i][c2 - 1] = swap;
     }  
     display();
}
