#include <iostream>

using namespace std;

int main()
{
    int a,s=0;
    cout<<"Nhap so nguyen duong:"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cout<<i<<" ";
        s=s+i;
    }
    cout<<"Tong la:"<<s;
    return 0;
}
