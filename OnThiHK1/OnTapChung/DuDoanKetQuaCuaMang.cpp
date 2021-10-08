#include <iostream>
using namespace std;
void xuat(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void mang(int a[], int n)
{
	bool sb= true;
	for(int i=0;i<=n-2;i++)
	{
		if(sb)
		{
			if(a[i]>a[i+1]) swap(a[i], a[i+1]);
		}
		else 
		{
			if(a[i]<a[i+1]) swap(a[i], a[i+1]);
		}
		sb=!sb;
	}
}
int main()
{
	int a1[]={0,1,3,4,5,6,7,8,10};
	int a2[]={4,3,2,1,5,9,8,7,6};
	int n1=sizeof(a1)/sizeof(a1[0]);
	int n2= sizeof(a2)/sizeof(a2[0]);
	mang(a1,n1);
	xuat(a1,n1);
	mang(a2,n2);
	xuat(a2,n2);
	return 0;
}
