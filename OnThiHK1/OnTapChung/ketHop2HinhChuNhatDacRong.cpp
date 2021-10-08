#include <iostream>

using namespace std;
void hcnd(int a,int b)
{
    for(int c=0;c<b;c++)
    {
        for(int d=0;d<a;d++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void hcnr(int a,int b)
{
    for(int c=0;c<b;c++)
     {
         for (int d=0;d<a;d++)
         {
             if (d==0||d==a-1||c==0||c==b-1)
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
    int m,n;
     cout<<"Nhap chieu dai:"<<endl;
     cin>>m;
     cout<<"Nhap chieu rong:"<<endl;
     cin>>n;
     hcnd(m,n);
     hcnr(m,n);

    return 0;
}
