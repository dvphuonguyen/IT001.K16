#include <iostream>
#include <math.h>
using namespace std;
// nhap mang
void NhapMang(int a[], int &n)
{
	cout<<"Nhap so phan tu n: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i<<" la : "; cin>>a[i];
	}
}
// ti so nguyen to
int SNT(int x)
{
	if(x<2) return 0;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return 0;
	}
	return 1;
}
// tinh tong cac so nguyen to
int TinhTongSNT(int a[], int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(SNT(a[i])==1) s+=a[i];
	}
	return s;
}
// tim gia tri cua phan tu lon thu k
//b1: swap
void swap(int &a, int &b)
{
	int t=a;a=b;b=t;
}
// b2: xep giam dan
void decrease(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[i]<a[j]) swap(a[i],a[j]);
		}
	}
}
//b3: tim gia tri lon thu k
int GiaTriLonThuK(int a[], int n,int k)
{
	decrease(a,n);
	return a[k-1];
}
int main()
{
	int a[100], n=0;
	NhapMang(a,n);
	int s, k ,maxvalue;
	s=TinhTongSNT(a,n);
	cout<<"Tong cua so nguyen to co trong mang la: "<<s<<endl;
	do
	{
		cout<<"Nhap k: ";cin>>k;
	}
	while(k<1||k>n);
	maxvalue= GiaTriLonThuK(a,n,k);
	cout<<"Gia tri lon thu "<<k<<" la: "<<maxvalue;
	return 0;
}
