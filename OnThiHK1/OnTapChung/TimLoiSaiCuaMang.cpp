#include <iostream>
using namespace std;
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i<<" : "; cin>>a[i];
	}
}
void xuatMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Xuat phan tu thu "<<i<<" : "<<a[i]<<endl;
	}
}
void xoaPhanTu(int a[], int &n, int vt)
{
	for(int i=vt; i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}
void xoaGiongNhau(int a[], int &n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;)
		{
			if(a[i]==a[j]) xoaPhanTu(a,n,j);
			else j++;
		}
	}
}
int main()
{
	int n, a[10000];
	cout<<"Nhap so luong phan tu : "; cin>>n;
	nhapMang(a,n);
	xoaGiongNhau(a,n);
	xuatMang(a,n);
	return 0;
}
