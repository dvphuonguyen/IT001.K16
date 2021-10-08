#include <iostream>

using namespace std;

void htd(int a)
{
    for(int b=0;b<a;b++)
    {
        for(int c=0;c<2*a-1;c++)
        {
            if(c>=a-b&&c<=a+b)
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
    for(int b=a-2;b>=0;b--)
    {
        for(int c=0;c<2*a-1;c++)
        {
            if(c>=a-b&&c<=a+b)
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
}
void htr(int a)
{
   for(int b=0;b<a;b++)
    {
        for(int c=0;c<2*a-1;c++)
        {
            if(c=a=-b||c==a+b)
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

   for(int b=a-2;b>=0;b--)
    {
        for(int c=0;c<2*a-1;c++)
        {
            if(c=a=-b||c==a+b)
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
}
int main()
{


    int m;
    cout<<"Nhap nua chieu cao:"<<endl;
    cin>>m;
    htd(m);
    htr(m);

    return 0;
}
