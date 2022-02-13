//6. Program to Accept a Matrix & Interchange the Diagonals
#include <iostream> 
using namespace std;

int main ()
    {
 
        static int array[10][10];
        int i, j, m, n, a;
 
        cout<<"Enter the order of the matix \n";
        cin>>m>>n;
 
        if (m == n)
        {
            cout<<"Enter the co-efficients of the matrix\n";
            for (i = 0; i < m; ++i) 
            {
                for (j = 0; j < n; ++j) 
                    cin>>array[i][j];
            }
            cout<<"Your matrix is :-\n";
            for (i = 0; i < m; ++i) 
            {
                for (j = 0; j < n; ++j) 
                    cout<<array[i][j]<<"\t";
                cout<<"\n\n\n";
            }
 
            for (i = 0; i < m; ++i) 
            {
                a = array[i][i];
                array[i][i] = array[i][m - i - 1];
                array[i][m - i - 1] = a;
            }
 
            cout<<"After changing the left diagonal to right diagonal:-\n";
            for (i = 0; i < m; ++i)
            {
                for (j = 0; j < n; ++j) 
                    cout<<array[i][j]<<"\t";
                cout<<"\n\n\n";
            }
        }
        else
            cout<<"The given order is not square matrix\n";
  
     return 0;
    }