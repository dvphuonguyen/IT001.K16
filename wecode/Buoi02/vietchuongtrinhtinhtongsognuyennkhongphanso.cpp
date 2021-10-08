//s(n)=1 + 2 + ....n voi n la so nguyen khong am
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,s=1;
	do
	{	cin>>n;
	}
	while(n<0);
	if(n==1) 
	{
	cout<<" i = 1 :"<<endl;cout<<"S(1) = 1";
	}
	else
	{
		
	cout<<"i = "<<n<<" :"<<endl;
	cout<<"S("<<i<<") = 1 + ";
	for(i=2;i<n;i++)
	{s=s+i;
	cout<<i<<" + ";
	}
	cout<<n<<" = "<<s+n;
	}
	
	return 0;
}

