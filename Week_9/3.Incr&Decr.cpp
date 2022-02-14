//3.Increament and decreament of a number till n using recursion.
#include<iostream>
using namespace std;

void dec(int n) {
if (n == 1) {
cout << "1" <<"\t";
return;
}
cout << n <<"\t";
dec(n - 1);
}
void inc(int n) {
if (n == 1) {
cout << "1" <<"\t";
return;
}
inc(n - 1);
cout << n <<"\t";
}
int main()
{
	int n;
	cout<<"Enter the value of n.\n";
	cin>>n;
	cout<<"\nIn Ascending Order: -\n";
    inc(n);
	cout<<"\nIn Descending Order: -\n";
	dec(n);
	
	return 0;
}