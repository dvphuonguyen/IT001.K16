// viet chuong trinh tinh tong cac so nguyen to nho hon so nguyen duong n
#include <bits/stdc++.h>
using namespace std;
bool snt(int n)
{
	int s=0;
	for(int i=2;i<=n;i++)
	{ 
		if(n%i==0) s=s+1;
	}
	if(s==1) return true;
	else return false;	

	
}
int main()
{
	int n,p=0;
	cout<<"Nhap so nguyen duong n: "<<endl; cin>>n;
	cout<<"So nguyen to be hon "<<n<<" la : ";
	for( int i=1; i<n;i++)
	{
		
		if(snt(i))
		{
			cout<< i <<" ";
			p=p+i;
		}
	}

	cout<<"\nTong cac so nguyen to nho hon n: "<<p;
	return 0;
}

