// tan suAT
#include <iostream>
using namespace std;
void swap(int &a, int & b)
{
	int t=a;a=b;b=t;
}
void decrease(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j]) swap(a[i],a[j]);
		}
	}
}
int count(int a[], int n, int b)
{
	int s=0;
	for(int i=0; i<n;i++)
	{
		if(a[i]==b) s++;
	}
	return s;
}
int main()
{
	int a[100], n;
	cout<<"Nhap so luong phan tu : ";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i<<" : ";cin>>a[i];
	}
	decrease(a,n);
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[i-1]) cout<<a[i]<<" : "<<count(a,n,a[i])<<endl;
	}
	return 0;
}
