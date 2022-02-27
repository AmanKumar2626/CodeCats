//6.Program to Convert a Number Decimal System to Binary System using Recursion
#include<iostream>
using namespace std;

int convert(int);
int main()
{
    int dec, bin;
    cout<<"Enter a decimal number: ";
    cin>>dec;
    bin = convert(dec);
    cout<<"\nThe binary equivalent of "<<dec<<" is "<<bin;
    return 0;
}
 
int convert(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * convert(dec / 2));
    }
}
