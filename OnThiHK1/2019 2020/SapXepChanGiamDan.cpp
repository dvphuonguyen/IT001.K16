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
void SapXepChanGiamDan(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] < a[j]) swap(a[i],a[j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
int main()
{
	int a[100], n;
	Input(a, n);
	SapXepChanGiamDan(a, n);
	return 0;
}