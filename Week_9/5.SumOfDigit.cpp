//5. sum of digits of a number until sum becomes single digit.
#include<iostream>
using namespace std;

int digSum(int n)
{
	int sum = 0;
	while(n > 0 || sum > 9)
	{
		if(n == 0)
		{
			n = sum;
			sum = 0;
		}
		sum +=n % 10;
		n /= 10;
	}
	return sum;
}
int main()
{
	int n;
	cout<<"Enter the value of n.\n";
	cin>>n;
	cout<<"The sum in 1 Digit ="<<digSum(n);
	return 0;
}