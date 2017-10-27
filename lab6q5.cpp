#include<iostream>
using namespace std;
int main()
{
	int i, j, k;
	char str[10];
	char *p;
	cout<<"Input 10 characters of string\n";
	for(k = 0; k < 10; k++)
	{    
		cin>>str[k];
    }
	p = &str[0];
	for(i = 10; i >= 0; i--)
	{
	    for(j = 10 - i; j < 10; j++)
	    {
		    cout<<*(p + j);
	    }
	    cout<<"\n";
    }
	return 0;
}
