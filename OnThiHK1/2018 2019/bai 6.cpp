#include <iostream>
#include <math.h>
using namespace std;
void Nhap(int a[],int &n)
{
	cout<<"Nhap so phan tu n: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i<<" la: ";cin>>a[i];
	}
}
//vi tri so lon nhat dau tien tren mang
int Max(int a[],int n)
{
	int m=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[m]) m=i;
	}
	return m;
}
//in ra cac so nguyen to
int snt(int x)
{
	if(x<2) return 0;
	for(int i=2;i<sqrt(x);i++)
	{
		if(x%i==0) return 0;
	}
	return 1;
}
void XuatRaSnt(int a[], int n)
{
	cout<<"Xuat ra so nguyen to: ";
	for(int i=0;i<n;i++)
	{
		if(snt(a[i])==1) cout<<a[i]<<" ";
	}
	cout<<endl;
}
//kiem tra tinh chan le
int ChanLe(int a[], int n)
{
	int s=0;
	// chan
	int p=0;
	// le
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0) s++;
		else p++;
	}
	if(s==n) return 1;
	else if(p==n) return -1;
	else return 0;
}
int main()
{
	int a[100], n;
	Nhap(a,n);// cau a: nhap mang
	cout<<"Vi tri cua gia tri lon nhat dau tien la : "<<Max(a,n);// cau b
	XuatRaSnt(a,n); // cau c;
	int k=ChanLe(a,n);
	if(k>0) cout<<"Toan chan";
	else if(k<0) cout<<"Toan le";
	else cout<<"Vua chan vua le";
	return 0;
}
