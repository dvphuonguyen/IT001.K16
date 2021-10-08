#include <iostream>
using namespace std;
void Input(char a[], int& n)
{
	do
	{
		cout << "Nhap so luong phan tu chuoi: "; cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << " la: "; cin >> a[i];
	}
}
void DoiChuHoaThanhChuThuongVaNguocLai(char a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 32;
		else if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}
int main()
{
	char a[100]; int n;
	Input(a, n);
	DoiChuHoaThanhChuThuongVaNguocLai(a, n);
	return 0;
}