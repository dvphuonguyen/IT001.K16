// tim so doi xung
#include<iostream>
using namespace std;
int s=0;
int doixung(int n)
{
	int a;
	if(n>0)
	{
		a=n%10;
		s=s*10+a;
		n=n/10;
		doixung(n);
	}
	return s;
}
int main()
{
	int n; cin>>n;
	int t=doixung(n);
	if(n==t) cout<<"true";
	else cout<<"false";
	return 0;
}
