#include <iostream>

using namespace std;

int main()
 {
     int a,b;
     cout<<"Nhap chieu dai:"<<endl;
     cin>>a;
     cout<<"Nhap chieu rong:"<<endl;
     cin>>b;
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
     return 0;
 }
