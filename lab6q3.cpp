#include<iostream>
using namespace std;
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10}, *p, i;
	cout<<"By normal loop method: \n";
	for(i = 0; i < 10; i++)
	{
		cout<<"arr["<<i<<"] = "<<arr[i]<<"\n";
	}
	cout<<"By pointer method: \n";
	p = arr;
	for(i = 0; i < 10; i++)
	{
		cout<<"(p + "<<i<<") = "<<*(p + i)<<"\n";
	}
	return 0;
}
