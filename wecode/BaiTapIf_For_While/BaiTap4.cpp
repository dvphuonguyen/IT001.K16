#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Nhap so nguyen :"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
         if(i%2!=0)
         {
             cout<<i<<" ";
         }
    }
   if(a%2==0)
   {
       cout<<a<<" ";
   }
    for(int j=a;j--;j>0)
    {
        if(j%2==0,j>=2)
        {
            cout<<j<<" ";
        }

    }

    return 0;
}
