#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int s=0;
    int i=1,j=1;
    if( n==0) cout<<"S(0) = 0";
    else 
	{
	for(i=1;i<=n;i++)
    {
        cout<<"i = "<<i<<":"<<endl;
        cout<<" S("<<i<<") = ";
         for(j=1;j<i;j++)
    {
        cout<<" "<<j<<" +";

    }
    cout<<" "<<i<<endl;

    }
	}
    
    return 0;
}
