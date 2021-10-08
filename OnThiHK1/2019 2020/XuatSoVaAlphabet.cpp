#include <iostream>
using namespace std;
void Input(char a[], int& n)
{
	do
	{
		cout << "Nhao so luong phan tu mang: "; cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << " la: "; cin >> a[i];
	}
}
void XuatSoVaChu(char a[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= '0' && a[i] <= '9' || a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z') cout << a[i] << "\t";
	}
}
int main()
{
	char a[100];
	int n;
	Input(a, n);
	cout << "Cac phan tu la so hoac chu la: ";
	XuatSoVaChu(a, n);
	return 0;
}