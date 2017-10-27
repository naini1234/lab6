#include<iostream>
using namespace std;
int main()
{
    int *p, a, b;
    cout<<"Enter any number\n";
    cin>>a;
    p = &a;
    b = *p;
    cout<<"The input number is: "<<a<<"\n";
    cout<<"The value of the pointer variable is: "<<*p<<"\n";
    cout<<"The value of the variable storing the value of the pointer variable is: "<<b<<"\n";
    a = 2;
    b = 3;
    p = &a;
    b = *p;
    cout<<"The new assigned number is: "<<a<<"\n";
    cout<<"The new value of the pointer variable is: "<<*p<<"\n";
    cout<<"The new value of the variable storing the value of the pointer variable is: "<<b<<"\n";
	p = &b;
	cout<<"The new assigned number is: "<<a<<"\n";
	cout<<"The new value of the pointer variable is: "<<*p<<"\n";
	cout<<"The new value of the variable storing the value of the pointer variable is: "<<b<<"\n";
	return 0;
}
