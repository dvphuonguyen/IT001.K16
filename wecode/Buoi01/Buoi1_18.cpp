#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c,d;
    cin>>a>>b>>c;
    d=(a+b+c)/3;
    cout<<"DTB = "<<roundf(d*pow(10,2))/pow(10,2)<<endl;
    if(d>=9&&d<=10)
    {
        cout<<"Loai: XUAT SAC";
    }
    else if(d>=8)
    {
        cout<<"Loai: GIOI";
    }
    else if(d>=7)
    {
        cout<<"Loai: KHA";
    }
    else if(d>=6)
    {
        cout<<"Loai: TB KHA";
    }
    else if(d>=5)
    {
        cout<<"Loai: TB";
    }
    else if(d>=4)
    {
        cout<<"Loai: YEU";
    }
    else
    {
        cout<<"Loai: KEM";
    }
    return 0;
}
