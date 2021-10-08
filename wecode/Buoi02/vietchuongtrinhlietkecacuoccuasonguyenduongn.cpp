//liet ke tat ca cac uoc cua so nguyen duong n
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	do
	{
		cin>>n;
	}
	while(n<0);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0) cout<<i<<" ";
	}
	return 0;
}

