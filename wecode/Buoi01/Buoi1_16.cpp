#include <iostream>

using namespace std;

int main()
{
    float a,b,x;
    cin>>a>>b;
    if(a==0,b==0)
    {
        cout<<"VSN";
    }
    else if(a==0,b!=0)
    {
        cout<<"VN";
    }
    else if(a!=0,b==0)
    {
        cout<<"x = 0";
    }
    else
    {
        cout<<"x = "<<(float)(-b)/a;
    }
    return 0;
}
