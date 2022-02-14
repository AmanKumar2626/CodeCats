//6.Program to Check whether a given String is Palindrome or not using Recursion
#include<iostream>
using namespace std;

void check(char [], int);
int main()
{
    char word[15];
 
    cout<<"Enter a word to check if it is a palindrome or Not\n";
    cin>>word;
    check(word, 0);
    return 0;
}
 
void check(char word[], int index)
{
    int len = strlen(word) - (index + 1);
    if (word[index] == word[len])
    {
        if (index + 1 == len || index == len)
        {
            cout<<"The entered word is a palindrome\n";
            return;
        }
        check(word, index + 1);
    }
    else
        cout<<"The entered word is not a palindrome\n";
}