#include <iostream>
using namespace std;
void Input(int a[], int& n)
{
	do
	{
		cout << "Nhap so luong phan tu mang: "; cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << " la: "; cin >> a[i];
	}
}
int Min(int a[], int n)
{
	int m;
	m = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < m) m = a[i];
	}
	return m;
}
void ViTriCacSoNhoNhat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == Min(a, n)) cout << i << " ";
	}
}
int main()
{
	int a[100], n;
	Input(a, n);
	cout << "Cac vi tri ma phan tu nho nhat xuat hien: ";
	ViTriCacSoNhoNhat(a, n);
	return 0;
}