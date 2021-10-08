#include <iostream>
using namespace std;
//ham cau truc tuyen thu
struct TuyenThu
{
	char MaSo[100];
	char Name[100];
	int Year;
	float TSP;// tong so phut
	int TST;// tong so tran
};
typedef TuyenThu tt;
// co TSP mx
int Max( tt a[], int n)
{
	int ln=a[0].TSP;
	for(int i=1;i<n;i++)
	{
		if( a[i].TSP>ln) ln=a[i].TSP;
	}
	return ln;
}
void XuatMax(tt a[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i].TSP==Max(a,n)) 
		{
			cout<<a[i].MaSo<<endl;
			cout<<a[i].Name<<endl;
			cout<<a[i].Year<<endl;
			cout<<a[i].TSP<<endl;
			cout<<a[i].TST<<endl;
		}
	}
}
// nam sinh >1990
void XuatNamSinh(tt a[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i].Year>1990)
		{
			cout<<a[i].MaSo<<endl;
			cout<<a[i].Name<<endl;
			cout<<a[i].Year<<endl;
			cout<<a[i].TSP<<endl;
			cout<<a[i].TST<<endl;
		}
	}
}
