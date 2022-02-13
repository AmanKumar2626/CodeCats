//8.Sorting a matrix ascending and descending by row and column.\n;
#include <iostream>
using namespace std;
static int array[10][10];
int row,col;
void display();
void assend_row();
void dessend_row();
void dessend_col();
void assend_col();
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
    	cout<<"1. For assending rows.\n";
    	cout<<"2. For dessending rows.\n";
    	cout<<"3. For assending columns.\n";
    	cout<<"4. For dessending columns.\n";
    	cout<<"5. Exit.\n";
    	cin>>choice;
    	
    	switch(choice)
    	{
    		case 1:
    			assend_row();
    			break;
    		case 2:
    			dessend_row();
    			break;
    		case 3:
    			assend_col();
    			break;
    		case 4:
    			dessend_col();
    			break;
    		case 5:
    			exit(0);
    		default:
			    cout<<"Invalid Choice.\n";
				break;
		}
	}
}
void display()
{
	cout<<"\nThe given matrix is \n\n";
    for (int i = 0; i < row; ++i)
      {
        for (int j = 0; j < col; ++j)
            cout<<array[i][j]<<"\t";
        cout<<"\n\n\n";
    }
}		
    
void assend_row(){
	int i,j,k,temp;
	cout<<"\nAfter arranging rows in ascending order\n\n";
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            for (k =(j + 1); k < col; ++k)
            {
                if (array[i][j] > array[i][k])
                {
                    temp = array[i][j];
                    array[i][j] = array[i][k];
                    array[i][k] = temp;
                }
            }
        }
    }
    display();
}
void dessend_row(){
	int i,j,k,temp;
    cout<<"\nAfter arranging the columns in descending order \n\n";
    for (j = 0; j < col; ++j)
    {
        for (i = 0; i < row; ++i)
        {
            for (k = i + 1; k < row; ++k)
            {
                if (array[i][j] < array[k][j])
                {
                    temp = array[i][j];
                    array[i][j] = array[k][j];
                    array[k][j] = temp;
                }
            }
        }
    }
    display();
}
void dessend_col(){
	int i,j,k,temp;
	cout<<"\nAfter arranging rows in descending order\n\n";
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            for (k =(j + 1); k < col; ++k)
            {
                if (array[i][j] < array[i][k])
                {
                    temp = array[i][j];
                    array[i][j] = array[i][k];
                    array[i][k] = temp;
                }
            }
        }
    }
    display();
}
void assend_col(){
	int i,j,k,temp;
    cout<<"\nAfter arranging the columns in asscending order \n\n";
    for (j = 0; j < col; ++j)
    {
        for (i = 0; i < row; ++i)
        {
            for (k = i + 1; k < row; ++k)
            {
                if (array[i][j] > array[k][j])
                {
                    temp = array[i][j];
                    array[i][j] = array[k][j];
                    array[k][j] = temp;
                }
            }
        }
    }
    display();
}