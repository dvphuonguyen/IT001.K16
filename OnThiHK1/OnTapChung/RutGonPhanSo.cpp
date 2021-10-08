#include<iostream>
#include <math.h>
using namespace std;
struct PhanSo
{
	int tu; int mau;
};
typedef PhanSo ps;
void Nhap(ps a[],int &n)
{
	do 
	{
		cout<<"Nhap so luong phan so: ";cin>>n;
	}
	while(n<0||n>100);
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap tu so: ";cin>>a[i].tu; 
		cout<<"\tNhap mau so: ";cin>>a[i].mau;
	}
}
int UCLN(int a, int b)
{
	a=abs(a);
	b=abs(b);
	if(a==b) return a;
	else if(a>b) return (a-b,b);
	else return (a,b-a);
}
void RutGon(ps &a)
{
	int k=UCLN(a.tu,a.mau);
	a.tu=a.tu/k;
	a.mau=a.mau/k;
}
void Xuat(ps a[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i].mau==0) cout<<"Khong thoa yeu cau bai toan."<<endl;
		else if(a[i].tu==0) cout<<0<<endl;
		else
		{
			if(a[i].mau<0) 
			{
				a[i].tu*=(-1);
				a[i].mau*=(-1);
			}
			RutGon(a[i]);
			cout<<a[i].tu<<"/ "<<a[i].mau<<endl;
		}
	}
}
int main()
{
	ps a[100]; int n;
	Nhap(a,n);
	Xuat(a,n);
	return 0;
}
