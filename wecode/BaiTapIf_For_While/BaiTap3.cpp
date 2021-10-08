#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Nhap so nguyen duong:"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            cout<<"Uoc la:"<<" "<<i;
        }


    }
    return 0;
}
