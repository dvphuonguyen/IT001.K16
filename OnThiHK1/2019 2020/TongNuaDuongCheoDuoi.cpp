#include<iostream>
using namespace std;
void NhapMang(int a[][100], int& n)
{
	do
	{
		cout << "Nhap so luong hang cua ma tran vuong : "; cin >> n;
	} while (n <= 0 || n > 100);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap phan tu hang " << i << " cot " << j << " la: "; cin >> a[i][j];
		}
	}
}
int TongNuaDuongCheoDuoi(int a[][100], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			s += a[i][j];
		}
	}
	return s;
}
int main()
{
	int a[100][100], n;
	NhapMang(a, n);
	cout << "Tong nua duoi cua duong cheo la: " << TongNuaDuongCheoDuoi(a, n);
	return 0;
 }