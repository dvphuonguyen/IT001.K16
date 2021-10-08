#include<iostream>
using namespace std;
void Input(int a[], int &n)
{
	do
	{
		cout << "Nhap so luong phan tu mang: "; cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so luong phan tu " << i << " la: "; cin >> a[i];
	}
}
int Max(int a[],int n)
{
	int m = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > m) m = a[i];
	}
	return m;
}
void ViTriXuatHienSoLonNhat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == Max(a, n)) cout << i << "\t";
	}
}
int main()
{
	int a[100], n;
	Input(a, n);
	cout << "Vi tri cac phan tu lon nhat la: ";
	ViTriXuatHienSoLonNhat(a, n);
	return 0;
}