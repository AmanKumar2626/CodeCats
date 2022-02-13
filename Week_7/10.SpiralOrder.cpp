//10.take a matrix and print in Spiral order. 
#include<iostream>
using namespace std;

int main()
{
	int row,col;
	cout<<"Enter the row and column.\n";
	cin>>row>>col;
	int a[row][col];
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
	//Spiral order print 
	int row_start = 0, row_end = row-1,column_start = 0,column_end = col-1;
	while(row_start<=row_end && column_start <=column_end)
	{
		//for row_start
		for(int c=column_start;c<=column_end;c++)
		cout<<a[row_start][c]<<" ";
		row_start++;
		
		//for column_end
        for(int r=row_start;r<=row_end;r++)
        cout<<a[r][column_end]<<" ";
        column_end--;
        
        //for row_end
        for(int c=column_end;c>=column_start;c--)
        cout<<a[row_end][c]<<" ";
        row_end--;
        
        //for column_start
        for(int r=row_end;r>=row_start;r--)
        cout<<a[r][column_start]<<" ";
        column_start++;
	}
	
	return 0;
}