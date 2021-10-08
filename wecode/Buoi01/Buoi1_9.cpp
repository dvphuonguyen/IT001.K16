#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,p,s;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<roundf(s*pow(10,2))/pow(10,2);

    return 0;
}
