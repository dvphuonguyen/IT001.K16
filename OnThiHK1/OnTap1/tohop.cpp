// giai to hop
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; int k; double p=1;double s=1;double q=1;
	cin>>n;
	cin>>k;
	if(k>n) cout<<0;
	else
	{
		for(int i=1; i<=n;i++)
		{
			p=p*i;
		}
		for(int l=1;l<=k;l++)
		{
			q=q*l;			
		}
		for(int j=1;j<=(n-k);j++)
		{
			s=s*j;
		}
		cout<<p/(s*q);
	}
	return 0;
}
