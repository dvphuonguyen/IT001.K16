#include<iostream>
using namespace std;
int main()
{
	int a[100], n, k;
	do
	{
		cout<<"Nhap sp luong phan tu :";cin>>n;
		cout<<"Nhap so nguyen k : ";cin>>k;
	}
	while((n<0||n>1000000)||(k<0||k>100000000));
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thi "<<i<<" : ";cin>>a[i];
	}
	int j=1; int s=a[1];
	for(int i=2;i<n;i++)
	{
		if(a[i]+k<=a[j])
		{
			j++;
		}
		else s+=a[i];
	}
	cout<<s;
	return 0;
}
