#include <iostream>
#include <math.h>
using namespace std;
//Nhap
void NhapMang(int a[], int &n)
{
	cout<<"Nhap n: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i<<" : ";
		cin>>a[i];
	}
}
//Xuat
void XuatMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Xuat phan tu thu "<<i<<" la: "<<a[i]<<endl;
	}
}
// tim gia tri lon nhat nhung khong phai la so nguyen to
int SNT(int x)
{
	if(x<2) return 0;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return 0;
	}
	return 1;
}
int Max(int a[], int n)
{
	// th1: tat ca la so nguyen to 
	int i=0;
	while(i<n&&SNT(a[i])==1) i++;
	if(i==n) return -1;
	// th2: k phai so nguyen to va so nguyen to
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(SNT(a[i])==0&&a[i]>s) s=a[i];
	}
	return s;
}
// dem so luong mang con tang trong mang so nguyen
int Increase(int a[], int n)
{
	int s=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1]) s++;
	}
	return s;
}
int main()
{
	int a[100],  n;
	NhapMang(a,n);
	XuatMang(a,n);
	if(Max(a,n)<0) cout<<"Tat ca cac phan tu deu la so nguyen to";
	else cout<<"Gia tri lon nhat ma khong phai la so nguyen to la: "<<Max(a,n);
	cout<<"So luong mang con tang co trong mang so nguyen la: "<<Increase(a,n);
	return 0;
}
