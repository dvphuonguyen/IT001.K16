//tinh tong can dan dau
#include<bits/stdc++.h>
using namespace std;
float tong(int n)
{	float s=-1;
	if(n==1) return -1;
	else 
		return pow((-1),n)*1/sqrt(n) + tong(n-1);
}	
int main()
{
	int n;cin>>n;
	cout<<tong(n);
	return 0;
}
