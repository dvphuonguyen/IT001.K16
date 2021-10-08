#include <iostream>
using namespace std;
void nhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan thu thu "<<i<<": ";cin>>a[i];
	}
}
void xuatMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	int n;
	int a=10;
	int b=12;
	cout<<"Nhap so phan tu mang: ";cin>>n;
	int *A= new int [n];
	int*x,y;
	x=&a;
	//y=&b;// khong duoc tai y khong phai la bien con tro
	cout<<x<<endl;
	//cout<<y<<endl;
	nhapMang(A,n);
	//delete A; bo
	xuatMang(A,n);
	delete []A;// them vao
	return 0;
	
}
