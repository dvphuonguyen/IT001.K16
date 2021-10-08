#include <iostream>

using namespace std;

int main()
{
    int a;
    int t;
    cout<<"Nhap so nguyen :"<<endl;
    cin>>a;
    if(a>0)
    {
        cout<<" So nguyen duong"<<endl;
        for(int i=1; i<=2*a;i++)
    {
        t=sprt(i);
        if(t*2==int(t*2))
        {
            cout<<"So chinh phuong"<<i;
        }
    }
    }
    else
    {
        cout<<"Khong phai so nguyen duong";
    }

    return 0;
}
