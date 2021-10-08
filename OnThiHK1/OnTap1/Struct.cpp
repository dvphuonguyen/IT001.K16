#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;
#define MAXN 100

struct SinhVien {
	char MASV[10];
	char HoTen[100];
	char NgaySinh[12];
	char GioiTinh;
	float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].MASV;
		cin >> a[i].HoTen;
		cin >> a[i].NgaySinh;
		cin >> a[i].GioiTinh;
		cin >> a[i].DiemToan;
		cin >> a[i].DiemToan;
		cin >> a[i].DiemLy;
		cin >> a[i].DiemHoa;
		a[i].DTB = (a[i].DiemToan + a[i].DiemLy + a[i].DiemHoa) / 3;
	}
}
int cut(int n, SinhVien a[])
{
	int t = 0;
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 6; j < 12; j++)
		{
			if (s < 5)
			{
				t = (a[i].NgaySinh[j]) + t * 10;
				s++;
			}

		}
	}
	return t;
}
void TimTheoNamSinh(SinhVien a[], int n, int y)
{
	for (int i = 0; i < n; i++)
	{

		if (y == cut(n, a))
		{
			cout << a[i].MASV << "	" << a[i].HoTen << "	" << a[i].NgaySinh << "	" << a[i].GioiTinh << "	" << a[i].DiemToan << "	" << a[i].DiemLy << "	" << a[i].DiemHoa << "	";
			cout << setprecision(3) << a[i].DTB;
		}
	}
}
int main() {
	SinhVien A[MAXN];
	int n, namsinh;std::cin >> namsinh;
	Nhap(A, n);
	
	TimTheoNamSinh(A, n, namsinh);
	return 0;
}