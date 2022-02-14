//2. Fibonacci Series Using Recursion of n digit.
#include <iostream>
using namespace std;
int fibonnaci(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fibonnaci(x-1)+fibonnaci(x-2));
   }
}
int main()
{
	int n,i=0;
	cout<<"Enter the value of n.\n";
	cin>>n;
	cout<<"The fibonacci series is :- \n";
	while(i < n) {
      cout<< fibonnaci(i)<<" ";
      i++;
   }
	return 0;
}