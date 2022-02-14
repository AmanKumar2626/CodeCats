//1. sum of digits of a number until sum becomes single digit.
#include<iostream>
using namespace std;

int fact(int n)
{
	if(n == 0)
	      return 1;	  	
	return (n * fact(n-1));
}
int main()
{
	int n;
	cout<<"Enter the value of n.\n";
	cin>>n;
	cout<<"The Factorial of "<<n<<" is - "<<fact(n);
	return 0;
}
