// tinh tong tu 1+...+1/n
#include<iostream>
using namespace std;
float tong(int n)
{
	if(n==1) return 1;
	else return 1.0/n+tong(n-1);
}
int main()
{
	int n; cin>>n;
	cout<<tong(n);
	return 0;
}
