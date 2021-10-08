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
void XuatCacKiTuKhongPhaiLaAlphabet(char a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((a[i] <= 'a' || a[i] >= 'z' )&&( a[i] <= 'A' || a[i] >= 'Z')) cout << a[i] << "\t";
	}
}
int main()
{
	char a[100]; int n;
	Input(a, n);
	XuatCacKiTuKhongPhaiLaAlphabet(a, n);
	return 0;
}