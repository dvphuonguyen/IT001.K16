// tinh s=1+1/2+...1/n n la so nguyen khong am
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	float s=1;
	do{
		cin>>n;
	}
	while(n<0);
	if(n==0) cout<<"S(0) = 0";
	else if( n==1) cout<<"S(1) = 1";
	else 
	{
		cout<<"S("<<i<<") = 1 +";
		for(i=2;i<=n;i++)
		{
			s=s+(float)(1)/i;
			cout<<" 1/"<<i<<" ";
		}
		cout<<"= "<<roundf((float)s*pow(10,2))/(pow(10,2));
	}
	return 0;
}
	
