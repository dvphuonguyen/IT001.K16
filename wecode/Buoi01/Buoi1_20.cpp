#include <iostream>
using namespace std;
int namnhuan(int y)
{
	if (y % 4 == 0 && y % 100 != 0 && y % 400 != 0) return 1;
	return 0;
}
int thang(int m)
{
	if (m >= 1 && m <= 12) return 1;
	else return 0;
}
int dieukien(int y, int m, int d)
{
	if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		if (d <= 30 && d > 0) return 1;
	}
	else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		if (d <= 31 && d > 0) return 1;
	}
	else
	{
		if (namnhuan(y) == 1)
		{
			if (d <= 29 && d > 0) return 1;
		}
		else
		{
			if (d <= 28 && d > 0) return 1;
		}
		return 0;
	}
}
int main()
{
	int y, m, d;
	cout << "Nhap nam : "; cin >> y;
	cout << "Nhap thang: "; cin >> m;
	cout << "Nhap ngay : "; cin >> d;
	if (y <= 0) cout << "Nam khong hop le.";
	else if (thang(m)==0) cout << "Thang khong hop le.";
	else
	{
		if (dieukien(y, m, d) == 1) cout << d << " / " << m << " / " << y << " la ngay hop le";	
		else cout << d << " / " << m << " / " << y << " la ngay khong hop le";
	}
	return 0;
}