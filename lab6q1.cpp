#include<iostream>
using namespace std;
int main()
{
	
    int i, *pint;
    long int li,*plint;
    short int si,*psint;
    float f, *pfloat;
    double d, *pdouble;
    bool b, *pbool;
    char c, *pchar;
    pint = &i;
    plint = &li;
    psint = &si;
    pfloat = &f;
    pdouble = &d;
    pbool = &b;
    pchar = &c;
    cout<<"int: "<<sizeof(i)<<" & pointer: "<<sizeof(*pint)<<"\n";
    cout<<"long int: "<<sizeof(li)<<" & pointer: "<<sizeof(*plint)<<"\n";
    cout<<"short int: "<<sizeof(si)<<" & pointer: "<<sizeof(*psint)<<"\n";
	cout<<"float: "<<sizeof(f)<<" & pointer: "<<sizeof(*pfloat)<<"\n";
    cout<<"double: "<<sizeof(d)<<" & pointer: "<<sizeof(*pdouble)<<"\n";
    cout<<"boolean: "<<sizeof(b)<<" & pointer: "<<sizeof(*pbool)<<"\n";
    cout<<"char: "<<sizeof(c)<<" & pointer: "<<sizeof(*pchar)<<"\n";
    return 0;
}
