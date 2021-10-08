#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Nhap chieu dai la:"<<endl;
    cin>>a;
    cout<<"Nhap chieu rong la:"<<endl;
    cin>>b;
    for (int c=0;c<b;c++)
    {
        for (int d=0;d<a;d++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

