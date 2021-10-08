#include <bits/stdc++.h>
using namespace std;
struct NTN
{ int ngay,thang,nam;
};
struct khachhang
{	char ten[10];
	NTN vaoo;
	float gia,tien;
	int songay;
};

int main()
{
	int n;
	khachhang kh[80];
	cout<<"So khach hang o khach san la: "<<endl;cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap khach hang thu : "<<i<<endl;
		cout<<"Ten khach : ";cin>>kh[i].ten;
		cout<<"Ngay : ";cin>>kh[i].vaoo.ngay;
		cout<<"Thang : ";cin>>kh[i].vaoo.thang;
		cout<<"Nam : ";cin>>kh[i].vaoo.nam;
		cout<<"Don gia : ";cin>>kh[i].gia;
		cout<<"So ngay  : ";cin>>kh[i].songay;
		kh[i].tien=kh[i].gia*kh[i].songay;}
	cout << "\n DANH SACH KHACH HANG: \n";
	cout<<"STT" << setw(20) << "Tenkhach" << setw(6) <<"Ngay" << setw(7) <<"Thang" << setw(7) <<"Nam" << setw(10) <<"Dongia" << setw(10) <<"Songay" << setw(15) <<"Thanhtien"<<endl;
	for(int i=0; i<n; i++)
	{
		cout << setw(3) << i + 1 << setw(20) << kh[i].ten << setw(6) << kh[i].vaoo.ngay << setw(7) << kh[i].vaoo.thang << setw(7) << kh[i].vaoo.nam << setw(10) << kh[i].gia << setw(10) << kh[i].songay << setw(15) << kh[i].tien << endl;
	}

//tong so ngay cua cac khach hang
// don gia binh quan cua cac khach;
//tong thanh tien cua cac khach
// So ngay o lon nhat cua khach
	int s=0;
	int p=0;
	float a=0,b=0;
	int m;
	for(int i=0;i<n;i++)
	{
		s=s+kh[i].songay;
		p=p+1;
		a=a+kh[i].gia;
		b=b+kh[i].tien;
		m=kh[0].songay;
		if(kh[i].songay>m) {m=kh[i].songay;}
	}
	cout<<"Tong so ngay cua cac khach la : "<<s<<endl;
	cout<<"Don gia binh quan cua khach hang la : "<< float(a)/p<<endl;
	cout<<"Tong thanh tien cua cac khach hang la : "<<float(b)<<endl;
	cout<<"So ngay lon nhat cua cac khach : "<<m<<endl;
	return 0;
}
