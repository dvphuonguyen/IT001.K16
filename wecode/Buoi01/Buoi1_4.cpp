#include <iostream>

using namespace std;

int main()
{
    int a,b,x,y,t;
    //a:so tien mot ly tra dao
    //b:so tien mot ly ca phe sua
    // x : so ly tra dao
    //b: so ly ca phe sua
    cin>>a>>b>>x>>y;
    t=500000-a*x-b*y;
    cout<<"So tien ma ban Nguyen nhan lai: "<<t;

    return 0;
}
