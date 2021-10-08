#include <iostream>

using namespace std;

int main()
{
   int a;
   cout<<"Nhap chieu cao:"<<endl;
   cin>>a;
   for(int b=0;b<a-1;b++)
   {
       for (int c=0;c<2*a-1;c++)
       {
           if(c==a-b||c==a+b)
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
cout<<" ";
   for(int c=0;c<2*a-1;c++)
   {
       cout<<"*";
   }
   return 0;
}
