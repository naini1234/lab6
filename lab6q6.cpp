#include<iostream>
using namespace std;
int main()
{
	char str[20], *p;
	int i, j, k;
	cout<<"Input 10 characters of string\n";
	for(k = 0; k < 10; k++)
	{
		cin>>str[k];
	}
	p = &str[0];
	for(i = 0; i <= 10; i++)
	{
	    for(j = 10 - i; j < 10; j++)
	    {
		    cout<<*(p + j);
	    }
	    cout<<"\n";
    }
	return 0;
}
