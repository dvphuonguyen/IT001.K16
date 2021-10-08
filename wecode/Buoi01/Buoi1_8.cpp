#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a,b,c,d,e,f;
    cin>>a>>b;
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    cout<<"("<<a<<")"<<" + ("<<b<<") = "<<c<<endl;
    cout<<"("<<a<<")"<<" - ("<<b<<") = "<<d<<endl;
    cout<<"("<<a<<")"<<" * ("<<b<<") = "<<roundf(e*pow(10,2))/pow(10,2)<<endl;
    cout<<"("<<a<<")"<<" / ("<<b<<") = "<<roundf(f*pow(10,2))/pow(10,2)<<endl;

    return 0;
}
