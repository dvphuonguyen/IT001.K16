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
int DoiXung(int n)
{
	int s = 0;
	int t = n;
	if (n < 0) return 0;
	while (n != 0)
	{
		int a;
		a = n % 10;
		s = s * 10 + a;
		n = n / 10;
	}
	if (s == t) return 1;
	else return 0;
}
int main()
{
	int a[100], n;
	Input(a, n);
	cout << "Cac phan tu doi xung trong mang: ";
	for (int i = 0; i < n; i++)
	{
		if (DoiXung(a[i]) == 1) cout << a[i] << " ";
	}
	return 0;
}