//7. Find the power of value using recursion.
#include<iostream>
using namespace std;

int power(int n,int p)
{
	if(p == 0)
	      return 1;
	      
    int prevpower = power(n , p - 1);
    return n * prevpower;
}

int main()
{
	int num,pwr;
	cout<<"Enter the number and its order.\n";
	cin>>num>>pwr;
	cout<<"The "<<pwr<<" power of the value "<<num<<" is "<<power(num,pwr);
	return 0;
}