//10. Program to find whether a Number is Prime or Not using Recursion
#include <iostream>
using namespace std;

int isprime(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return isprime(num, i - 1);
       }       
    }
}

int main()
{
	int num;
	cout<<"Enter a Number to check prime or not\n";
    cin>>num;
    int check = isprime(num, num / 2);
    if (check == 1)
        cout<<"Number is a prime number\n";
    else
        cout<<"Number is not a prime number\n";
    return 0;
}