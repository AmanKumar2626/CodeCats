//8. Program to Reverse the String using Recursion
#include<iostream>
using namespace std;
void reverse(char [], int, int);
int main()
{
    char str[30];
    int size;
 
    cout<<"Enter a string to reverse:- ";
    cin>>str;
    size = strlen(str);
    reverse(str, 0, size - 1);
    cout<<"The string after reversing is:"<< str;
    return 0;
}
 
void reverse(char str[], int index, int size)
{
    char temp;
    temp = str[index];
    str[index] = str[size - index];
    str[size - index] = temp;
    if (index == size / 2)
    {
        return;
    }
    reverse(str, index + 1, size);
}