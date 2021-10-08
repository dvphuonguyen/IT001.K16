#include<iostream>
using namespace std;
void Input(int a[], int& n)
{
	do
	{
		cout << "Nhap so luong phan tu mang: "; cin >> n;
	} while (n <= 0 || n > 10000);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << " la : "; cin >> a[i];
	}
}
int Tong(int a[], int b[], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] == b[j]) s += a[i];
		}
	}
	// 3 6 9 2
	// 6 3 2 4 1
	return s;
}
int main()
{
	int a[100], b[100], n, m;
	Input(a, m);
	Input(b, n);
	cout << "Tong giao cua hai mang : " << Tong(a,b,m,n);
	return 0;
}