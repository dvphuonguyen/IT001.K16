#include <iostream>
using namespace std;
//Nhap tuyen thu
struct TuyenThu
{
	char MaTT[100];
	char Name[100];
	int Year;
	float TSP;// tong so phut
	int TST; // tong so tran
};
typedef TuyenThu tt;
void Input(tt a[], int &n)
{
	do
	{
		cout<<"Nhap so luong tuyen thu: ";cin>>n;
	} while(n<=0);
	for(int i=0;i<n;i++)
	{
		cout<<"\tTuyen thu thu "<<i<<" la: "<<endl;
		cout<<"Nhap ma tuyen thu :";cin.getline(a[i].MaTT,100); 
		cout<<"Nhap ho ten tuyen thu: ";cin.getline(a[i].Name, 100);
		cout<<"Nhap nam sinh: ";cin>>a[i].Year;
		cout<<"Nhap tong so phut: ";cin>>a[i].TSP;
		cout<<"Nhap tong so tran: ";cin>>a[i].TST;
	}
}
// tong so phut mAX
void Max(tt a[], int n)
{
	int m=0;
	for(int i=1;i<n;i++)
	{
		if(a[i].TSP>a[m].TSP) m=i;
	}
	cout<<"Tuyen thu co tong so phut cao nhat la: "<<m<<" ten la: "<<a[m].Name<<endl;
}
// tuyen thu co nam sinh >1990
void TuyenThuCoNamSinhLonHon1990(tt a[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i].Year>1990) 
		{
			cout<<"\tTuyen thu thu "<<i<<endl;
			cout<<a[i].MaTT<<"\t"<<a[i].Name<<"\t"<<a[i].Year<<"\t"<<a[i].TSP<<"\t"<<a[i].TST<<endl;
			
		}
	}
}
int main()
{
	tt a[100]; int n;
	Input(a,n);
	Max(a,n);
	TuyenThuCoNamSinhLonHon1990(a,n);
	return 0;
}
