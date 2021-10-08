#include <iostream>

using namespace std;

int main()
{
    int(a);
    cout<<"Nhap chieu cao:"<<endl;
    cin>>a;
    for(int b=0;b<=a;b++)
    {
        for (int c=0;c<=b;c++)
        {
            if (c==0||b==c||b==a)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
