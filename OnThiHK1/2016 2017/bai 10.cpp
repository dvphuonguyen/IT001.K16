#include <iostream>
using namespace std;
struct SinhVien
{
	char MaSV[8];
	char HoTen[250];
	int Namsinh;
	float DTB;
};
typedef SinhVien sv;
void Nhap(sv a[],int n)
{
	cout<<"Nhap n: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap a["<<i<<"]. MaSV: "; cin>>a[i].MaSV;
		cout<<"Nhap a["<<i<<"]. HoTen: "; cin>>a[i].HoTen;
		cout<<"Nhap a["<<i<<"]. Namsinh: "; cin>>a[i].Namsinh;
		cout<<"Nhap a["<<i<<"]. DTB: "; cin>>a[i].DTB;
	}
}
// dem so luong ki tu
int Dem(char a[8])
{
	int s=0;
	while(a[s]!='\0') s++;
	return s;
}
//tim kiem theo masv
int Find(sv a[],int n, char b[8])
{
	for(int i=0;i<n;i++)
	{
		int c=Dem(a[i].MaSV);
		// chieu dai cua ma so
		int d=Dem(b);
		// chieu dai chuoi can tim
		if(c!=d) return -1;
		// do dai khac nhau nen khong co sinh vien can tim
		else
		{
			for(int j=0;j<c;j++)
			{
				if(a[i].MaSV[j]!=b[j]) return -1;
				// co 1 ki tu khac nhau nen khong co sinh vien can tim
			}
			return i;
			// co sinh vien tim thoa do dai bang nhau va tat ca cac ki tu giong nhau
		}
	}
}
int main()
{
	sv a[100];int n; char b[8];
	cout<<"Nhap b= ";cin>>b;
	Nhap(a,n);
	if(Find(a,n,b)<0) cout<<"Khong co sinh vien can tim.";
	// return -1
	else cout<<"Sinh vien vi tri thu : "<<Find(a,n,b);
	// return i 
	return 0;
}
