// tam giac theo thu tu so ta nen dung c
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; double p=1; double s=1;
	cin>>n;
	for(int i=1; i<=n;i++)
	{
			for(int j=1;j<=i;j++)
		{
			p=p*j;
		}
			for(int k=1;k<=(i-1);k++)
		{
			s=s*k;
		}
			for(int a=n; a>i;a--)
		{
			cout<<" ";
		}
			for(int b=1;b<=i;b++)
		{
			cout<<(p)/s<<" ";
		}
		cout<<endl;
	}
	return 0;
		
}
