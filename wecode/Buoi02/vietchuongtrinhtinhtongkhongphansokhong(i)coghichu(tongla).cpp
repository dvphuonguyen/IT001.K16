//s(n)=1 + 2 + ....n voi n la so nguyen khong am xuat ra Tong la: n
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,s=0;
	do
	{	cin>>n;
	}
	while(n<0);
	for(i=0;i<=n;i++)
	{s=s+i;
	}
	cout<<"Tong la : "<<s;
	
	return 0;
}

