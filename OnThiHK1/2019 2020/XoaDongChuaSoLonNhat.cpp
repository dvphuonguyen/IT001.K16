#include <iostream>
using namespace std;
void NhapMang(int a[][100], int& r, int& c)
{
	do
	{
		cout << "Nhap so luong hang : "; cin >> r;
	} while (r <= 0 || r > 100);
	do
	{
		cout << "Nhap so luong dong : "; cin >> c;
	} while (c <= 0 || c > 100);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "Nhap phan tu hang " << i << " cot " << j << " la: "; cin >> a[i][j];
		}
	}
}
int SoLonNhat(int a[][100], int r, int c)
{
	int m = a[0][0];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] > m)
			{
				m = a[i][j];
			}

		}
	}
	return m;
}
int ViTriSoLonNhatDauTien(int a[][100], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] == SoLonNhat(a, r, c)) return i;
		}
	}
}
void XoaDongChuaSoLonNhatDauTien(int a[][100], int& r, int& c)
{
	for (int i = 0; i < r; i++)
	{
		if (i !=ViTriSoLonNhatDauTien(a, r, c))
		{
			for (int j = 0; j < c; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		
	}
}
int main()
{
	int a[100][100], r, c;
	NhapMang(a, r, c);
	XoaDongChuaSoLonNhatDauTien(a, r, c);
	return 0;
 }