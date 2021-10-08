# include<iostream>
#include <math.h>
using namespace std;
//Nhap mang
void Input(int a[], int &n)
{
	do
	{
		cout<<"Nhap so luong mang: ";cin>>n;
	} while(n<=0);
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i<<" la : ";cin>>a[i];
	}
}
// Xuat MANG
void Output(int a[], int n)
{
	cout<<"Xuat phan tu mang la: ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
// max nhung khong phai la snt
int snt(int n)
{
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
void Max(int a[], int n)
{
	int s=0;int m;
	while(snt(a[s])==1) s++;
	if(s==n) cout<<"Toan mang la so nguyen to."<<endl;
	else
	{
		m=s;
		for(int i=0;i<n;i++)
		{
			if(snt(a[i])==0&&a[i]>a[m]) m=i;
		}
		cout<<"So lon nhat trong mang nhung khong phai la so nguyen to la: "<<a[m]<<endl;	
	}
}
// Dem so luong mag con tang co trong mang so nguyen
int DemSoLuongMangConTang(int a[], int n)
{
	int s=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i+1]>a[i]) s++;
	}
	return s;
}
// neu xet th mang con co tu 3 pt trowr len thif dau thien ta se rut gon cac phan tu giong nhau ma dung canh nhau lai.
// sau do ta se xet a[i-1]<a[i]<a[i+1]&&a[i+1]>a[i+2]
int main()
{
	int a[100],n;
	Input(a,n);
	Output(a,n);
	Max(a,n);
	cout<<"So luong mang con tang la: "<<DemSoLuongMangConTang(a,n);
	return 0;
}
