#include <iostream>
using namespace std;

void strcopy(char str[]);
void strlength(char str[]);
void strcatt(char str1[],char str2[]);
void strcompare(char str1[],char str2[]);



int main() {
	char str1[100],str2[100];
	cout<<"input two strings\n";
	cin>>str1>>str2;
              strcopy( str1);
              strlength(str1);
              strcatt( str1, str2);
              strcompare( str1,str2);
	return 0;
}
void strcopy(char str[]){
	char arr[100];int i;
	for(i=0;str[i]!='\0';i++)
	{
		arr[i]=str[i];
	}
	arr[i]='\0';
	cout<<"the copied string is "<<arr<<"\n";
}
void strlength(char str[])
{
	int len=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	cout<<"the length of the string is "<<len;
}
void strcatt(char str1[],char str2[]){
	int i,j;
	for(i = 0; str1[i] != '\0'; i++);

    for(j = 0; str2[j] != '\0'; j++, i++)
    {
        str1[i] = str2[j];
    }
	cout<<"\nthe combined string is "<<str1;
}
void strcompare(char str1[],char str2[]){
	int i,j,c=0;
	for(i=0;(str1[i]!='\0'||str2[i]!='\0');i++)
	{
	       if(str1[i] != str2[i])
	       {
	            c = 1;
	             break;
             	}


	}
	if(c == 0)
	cout<<"Both strings are same.";
	else
	cout<<"Both strings not same.";
    


}
