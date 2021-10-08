#include <iostream>
using namespace std;
void NhapMang(int a[], int& n)
{
	do
	{
		cout << "Nhap so luong mang: "; cin >> n;
	} while (n <= 0 || n > 10000);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << " la: "; cin >> a[i];
	}
}
// 1 2 3
// 4 5
// 
void swap(int& a, int& b)
{
	int t = a; a = b; b = t;
}
void SapXepMangTangDan(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j]) swap(a[i], a[j]);
		}
	}
}
void NoiMang(int a[], int b[], int m, int n)
{
	int c[100]; int k;
	k = m + n;
	for (int i = 0; i < m; i++)
	{
		c[i] = a[i];
	}
	for (int i = m; i < k; i++)
	{
		c[i] = b[k - 1 - i];
	}
	SapXepMangTangDan(c, k);
	for (int i = 0; i < k; i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;
}

int main()
{
	int a[100], b[100], m, n, c[100], k;
	NhapMang(a, m);
	NhapMang(b, n);
	NoiMang(a, b, m, n);
	return 0;
}
