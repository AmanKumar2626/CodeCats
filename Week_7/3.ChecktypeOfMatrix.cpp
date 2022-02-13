//3. Check matrix is identity,diagonal,scaler,Spaerse & Symmetric or not.
#include<iostream>
using namespace std;

int row=3,col=3;
int matrix[3][3];
void chkIdentity();
void chkDiagonal();
void chkScaler();
void chkSymmetric();
void chkSparse();
int main()
{
	int choice;
    cout<<"Enter the Matrix Element:\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>matrix[i][j];
        }
    }
   while(1)
    {
    	cout<<"\n\nChoose any option.\n";
    	cout<<"1. For check identity.\n";
    	cout<<"2. For check Diagonal.\n";
    	cout<<"3. For check Scaler.\n";
    	cout<<"4. For check Sparse.\n";
    	cout<<"5. For check Symmetric.\n";
    	cout<<"6. For Exit.\n";
    	cin>>choice;
    	
    	switch(choice)
    	{
    		case 1:
    			chkIdentity();
    			break;
    		case 2:
    			chkDiagonal();
    			break;
    		case 3:
    			chkScaler();
    			break;
    		case 4:
    			chkSparse();
    			break;
    		case 5:
    			chkSymmetric();
    			break;
    	    case 6:
    			exit(0);
    		default:
			    cout<<"Invalid Choice.\n";
				break;
		}
	}
 return 0;   
}

void chkIdentity(){
	//check Diagonal elements are 1 and rest elements are 0
    int point=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
        if(i==j && matrix[i][j]!=1)
        {
            point=1;
            break;
        }
        else if(i!=j && matrix[i][j]!=0)
        {
            point=1;
            break;
           }
        }
    }
    if(point==1)
       cout<<"Given Matrix is not an identity matrix.\n";
    else
        cout<<"Given Matrix is an identity matrix.\n";
}

void chkDiagonal()
{
	//check except Diagonal elements are 0 or not
    int point=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
        if(i!=j && matrix[i][j]!=0)
        {
            point=1;
            break;
        }
        }
    }
    if(point==1)
        cout<<"Given Matrix is not a diagonal Matrix.\n";
    else
        cout<<"Given Matrix is a diagonal Matrix.\n";
}
void chkScaler()
{
	int flag=0;
	 //check all diagonal elements are same or not
        for (int i = 0;i<row;i++){
        for(int j=0;j<col;j++){
            if (i != j && matrix[i][j] != 0)
                flag=1;
        }
    }
    // check whether diagonal elements are equal to each other.
    for(int i =0;i<row-1;i++)
       {
          if(matrix[i][i] != matrix[i+1][i+1])
            flag=1;
	   }
            
    if(flag==1)
        cout<<"Given Matrix is not a Scaler Matrix.\n";
    else
        cout<<"Given Matrix is a Scaler Matrix.\n";
}

void chkSparse()
{
	int count_zero=0;
     //Count number of zeros present in the given Matrix
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j]==0)
            {
              count_zero++;
            }
        }
    }
    //check if zeros present in the given Matrix>(row*column)/2
    if(count_zero>(row*col)/2)
        cout<<"Given Matrix is a Sparse Matrix.";
    else
        cout<<"Given Matrix is not a Sparse Matrix.";
}
void chkSymmetric()
{
	 //compute the transpose matrix
     int tran_matrix[col][row];

      for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            tran_matrix[i][j]=matrix[j][i];
        }
    }
	 /*check given matrix elements and transpose
      matrix elements are same or not.*/
     int flag=0;
     for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(matrix[i][j]!=tran_matrix[i][j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
        cout<<"Given Matrix is not a symmetric Matrix.";
    else
        cout<<"Given Matrix is a symmetric Matrix.";
}