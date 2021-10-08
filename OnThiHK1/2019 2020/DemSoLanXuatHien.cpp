#include <iostream>
using namespace std;
void Input(int a[], int& n)
{
	do
	{
		cout << "Nhap so luong phan tu mang: "; cin >> n;
	} while (n <= 0 || n > 10000);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << " la: "; cin >> a[i];
	}
}
void swap(int& a, int& b)
{
	int t = a; a = b; b = t;
}
void SapXepTangDan(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j]) swap(a[i], a[j]);
		}
	}
	for (int i = 0; i < n; i++) 
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int Dem(int a[], int n, int k)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == k) s++;
	}
	return s;
}
void DemSoLanXuatHien(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[i + 1]) cout << a[i] << " xuat hien " << Dem(a, n, a[i]) << " lan." << endl;
	}
}
int main()
{
	int a[100], n;
	Input(a, n);
	SapXepTangDan(a, n);
	DemSoLanXuatHien(a, n);
	return 0;
}