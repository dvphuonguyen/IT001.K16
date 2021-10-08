#include <iostream>
#define maxc 100
using namespace std;
struct NGAY 
{
	int ngay,thang,nam;
};
struct SOTIETKIEM
{
	char maso[5];
	char loaitietkiem[10];
	char name[30];
	long chungminhnhandan;
	NGAY ngaymoso;
	float sotiengui;
};
typedef SOTIETKIEM stk;
void nhap(stk a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i].maso;
		cin>>a[i].loaitietkiem;
		cin>>a[i].name;
		cin>>a[i].chungminhnhandan;
		cin>>a[i].ngaymoso.ngay;
		cin>>a[i].ngaymoso.thang;
		cin>>a[i].ngaymoso.nam;
		cin>>a[i].sotiengui;
	}
}
void xuat(stk a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i].maso<<","<<a[i].loaitietkiem<<","<<a[i].name<<","<<a[i].chungminhnhandan<<","<<a[i].ngaymoso.ngay<<"/"<<a[i].ngaymoso.thang<<"/"<<a[i].ngaymoso.nam<<","<<a[i].sotiengui<<endl;
	}
}
int main()
{
	int n; stk a[maxc];
	cin>>n; nhap(a,n);
	cout<<n<<endl;
	xuat(a,n);
	return 0;
}
