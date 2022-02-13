//7.Display Upper and lower triangle matrix and also print sum of it.
#include<iostream>
using namespace std;
int row=3,col=3,i,j;
int matrix[3][3];
void displayUpper();
void displayLower();
void sumOfUpper();
void sumOfLower();
int main()
{
    cout<<"Enter the Matrix Element:\n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>matrix[i][j];
        }
   }
   cout<<"\nYour Matrix is:-  \n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            cout<<matrix[i][j]<<"  ";
            cout<<"\n\n";
   }
   displayUpper();
   sumOfUpper();
   displayLower();
   sumOfLower();
   
   return 0;  
}
void displayUpper()
{
	    printf("\nUpper Triangular Matrix is:\n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i>j)
              cout<<"0"<<"  ";
            else
                cout<<matrix[i][j]<<"  ";
        }
        cout<<"\n\n";
    }
}
void displayLower()
{
	cout<<"\nLower Triangular Matrix is:\n";
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<j)
              cout<<"0  ";
            else
                cout<<matrix[i][j]<<"  ";
        }
        cout<<"\n\n";
    }
}
void sumOfUpper()
{
	int sum=0;
	 for (i = 0; i < row; i++)
        for (j = 0; j < col; j++) {
            if (i <= j) {
                sum += matrix[i][j];
            }
        }
   cout<<"\nSum of Upper Triangular Matrix Elements is: "<<sum<<"\n\n";
}
void sumOfLower()
{
	int sum=0;
	for (i = 0; i < row; i++)
        for (j = 0; j < col; j++) {
            if (j <= i) {
                sum += matrix[i][j];
            }
        }
    cout<<"\nSum of Lower Triangular Matrix Elements is: "<<sum<<"\n\n";
}