#include <iostream>
using namespace std;
void Input(int a[], int& n)
{
	do
	{
		cout << "Nhap so luong phan tu : "; cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << " la: "; cin >> a[i];
	}
}
int DemSoNguyenAmChiaHetCho5NhungKhongChiaHetCho100(int n)
{
	if (n >= 0) return 0;
	else
	{
		if (n % 5 == 0 && n % 100 != 0) return 1;
		return 0;
	}
	
}
int main()
{
	int a[100], n;
	Input(a, n);
	cout << "Phan tu la so nguyen am chia het cho 5 nhung khong chia het cho 100 la: ";
	for (int i = 0; i < n; i++)
	{
		if (DemSoNguyenAmChiaHetCho5NhungKhongChiaHetCho100(a[i]) == 1) cout << a[i] << " ";
	}
	return 0;
}