#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    if(a>b&&b>c){cout<<c<<" "<<b<<" "<<a;}
    if(a>b&&c>b){cout<<b<<" "<<c<<" "<<a;}
    if(c>b&&b>a){cout<<a<<" "<<b<<" "<<c;}
    if(c>a&&a>b){cout<<b<<" "<<a<<" "<<c;}
    if(b>a&&a>c){cout<<c<<" "<<a<<" "<<b;}
    if(b>c&&c>a){cout<<a<<" "<<c<<" "<<b;}

    return 0;
}
