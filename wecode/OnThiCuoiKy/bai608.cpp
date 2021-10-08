#include <iostream>
#define maxc 100
using namespace std;
struct NGAY
{
	int ngay,thang,nam;
};
struct HOPSUA
{
	char nhanhieu[maxc];
	float trongluong;
	NGAY hansudung;
};
typedef HOPSUA hp;
void nhap(hp a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i].nhanhieu;
		cin>>a[i].trongluong;
		cin>>a[i].hansudung.ngay;
		cin>>a[i].hansudung.thang;
		cin>>a[i].hansudung.nam;
	}
}
void xuat(hp a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i].nhanhieu<<","<<a[i].trongluong<<","<<a[i].hansudung.ngay<<"/"<<a[i].hansudung.thang<<"/"<<a[i].hansudung.nam<<endl;
	}
}
int main()
{
	int n; hp a[maxc];
	cin>>n;
	nhap(a,n);
	cout<<n<<endl;
	xuat(a,n);
	return 0;
}
