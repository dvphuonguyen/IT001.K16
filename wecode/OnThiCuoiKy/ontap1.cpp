#include<iostream>
using namespace std;
#define maxc 100
struct nhanvien
{
	int mssv;
	char name[maxc];
	char sex[maxc];
	int age;
	double wage;
};
typedef nhanvien nv;
void nhap(nv a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i].mssv;
		cin>>a[i].name;
		cin>>a[i].sex;
		cin>>a[i].age;
		cin>>a[i].wage;
	}
}
void xuat(nv a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i].mssv<<","<<a[i].name<<","<<a[i].age<<","<<a[i].wage<<","<<a[i].sex<<endl;
	}
}
int main()
{
	int n;cin>>n;
	nv a[maxc];
	nhap(a,n);
	cout<<n<<endl;
	xuat(a,n);
	return 0;
}
