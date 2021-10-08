#include <iostream>
using namespace std;
void nhap(int a[100][100],int &r, int &c)
{
	cout<<"Nhap so phan tu cot: ";cin>>c;
	cout<<"Nhap so phan tu dong: ";cin>>r;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
}
int swap(int &a,int &b)
{
	int t=a;a=b;b=t;
}
void doicho(int a[100][100],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c/2;j++)
		{
			swap(a[i][j],a[i][c-j-1]);
		}
	}
}

void xuat(int a[100][100],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=00;j<c;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int a[100][100], r,c ;
	nhap(a,r,c);
	doicho(a,r,c);
	xuat(a,r,c);
	return 0;
}
