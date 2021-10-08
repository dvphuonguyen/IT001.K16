#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n;int a;int m=0;
	cin>>n;
	while(n>0)
	{
		a=n%10;
		if(a>m) m=a;
		n=n/10;
	}
	cout<<m;
	return 0;
}
