// viet chuong trinh tim so dao nguoc cua so nguyen duong n
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	do
	{	cin>>n;
	}
	while(n<0);

	while(n>0)
	{
		a=n%10;
		if(a>0)
		cout<<a;
		n=n/10;
	}
	return 0;
}
