#include <iostream>

using namespace std;

int main()
{
   int a;
   cout<<"Nhap chieu cao"<<endl;
   cin>>a;
   for(int b=0;b<a;b++)
   {
       for (int c=0;c<2*a-1;c++)
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
    return 0;
}
