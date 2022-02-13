// 4. Write a complete code to find the largest number in each row and column.
#include<iostream>
using namespace std;

int main()
{
	int row,col;
	cout<<"Enter the row and column.\n";
	cin>>row>>col;
	int a[row][col];
	cout<<"Enter the elements of matrix.\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		cin>>a[i][j];
	}
	cout<<"Your matrix is :-\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		cout<<a[i][j]<<"\t";
		cout<<"\n\n";
	}
 cout<<endl;
 for(int i = 0; i < row; i++)
 {
 int largest = a[i][0];
 for(int j = 1; j < col; j++)
 if(a[i][j] > largest)
 largest = a[i][j];
 printf("The largest in row %d is: %d\n", i+1, largest);
 }
 for(int i = 0; i < col; i++)
 {
 int largest = a[0][i];
 for(int j = 1; j < row; j++)
 if(a[j][i] > largest)
 largest = a[j][i];
 printf("The largest in column %d is: %d\n", i, largest);
 }
}