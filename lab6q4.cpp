#include<iostream>
using namespace std;
int main()
{
	char str[20] = {'N', 'a', 'i', 'n', 'i', 'D', 'u', 'd', 'h', 'e'}, *p;
	int i;
	p = str;
	cout<<"By pointer method: \n";
	for(i = 0; i < 10; i++)
	{
		cout<<*(p)<<" ";
		*p++;
	}
	cout<<"\n By normal loop index method: \n";
	for(i = 0; i < 10; i++)
	{
		cout<<str[i]<<" ";
	}
	return 0;
}
