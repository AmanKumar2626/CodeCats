//4.Reverse a digit using recursion
#include<iostream>
#include <math.h>
using namespace std;
 
int rev(int, int);
int main()
{
    int num, result;
    int length = 0, temp;
 
    cout<<"Enter an integer number to reverse: ";
    cin>>num;
    temp = num;
    while (temp != 0)
    {
        length++;
        temp = temp / 10;
    }
    result = rev(num, length);
    cout<<"The reverse of "<<num<<" is "<<result;
    return 0;
}
 
int rev(int num, int len)
{
    if (len == 1)
    {
        return num;
    }
    else
    {
        return (((num % 10) * pow(10, len - 1)) + rev(num / 10, --len));
    }
}