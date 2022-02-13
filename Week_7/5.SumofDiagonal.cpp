//5. The sum of the  left diagonal and right diagonal of elements in matrix.
#include<iostream>
using namespace std;
    
    int main ()
    {
 
        static int array[10][10];
        int i, j, n, sum_rgt = 0, sum_left = 0;
 
        cout<<"Enter the row and column of the matix that is same \n";
        cin>>n;
        
            cout<<"Enter the elements of the matrix\n";
            for (i = 0; i < n; ++i)
            {
		    for (j = 0; j < n; ++j)
                    cin>>array[i][j];
            }
 
            cout<<"\nThe given matrix is \n";
            for (i = 0; i < n; ++i) 
            {
                for (j = 0; j < n; ++j)
                    cout<<array[i][j]<<"\t";
                cout<<"\n\n\n";
            }
 
            for (i = 0; i < n; ++i) 
            {
                sum_left += array[i][i];
                sum_rgt  += array[i][n - i - 1];
            }
            cout<<"\nThe sum of the left diagonal elements is = "<<sum_left;
            cout<<"\n\nThe sum of the right diagonal elements is   = "<<sum_rgt;
        return 0;        
} 