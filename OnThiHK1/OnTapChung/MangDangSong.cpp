#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
	cout<<"Nhap so luong phan tu : ";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i<<" : ";cin>>a[i];
	}
}
int kt(int a[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>a[i+1]*2||a[i]<a[i+1]*2||a[i]>a[i-1]*2||a[i]<a[i-1]*2) s++;
	}
	if(s==n) return 1;
	else return 0;
}
int main()
{
	int a[1000],n;
	nhap(a,n);
	if(kt(a,n)==1) cout<<"Mang dang song."<<endl;
	else cout<<"Mang khong co dang song.";
	return 0;
}
