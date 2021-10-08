//tinhtongcacchusole
#include<iostream>
using namespace std;int s=0;
int  dem(int n)
{
	 int a;
	if(n>0)
	{
		a=n%10;
		if(a%2==1) s=s+a;
		n=n/10;
		dem(n);
	}
	return s;
}
int main()
{
	int n;cin>>n;
	cout<<dem(n);
	return 0;
}
