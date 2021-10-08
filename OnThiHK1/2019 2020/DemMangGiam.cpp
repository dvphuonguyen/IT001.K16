#include<iostream>
using namespace std;
int s = 0;
void NhapMang(int a[], int& n)
{
	do
	{
		cout << "Nhap so luong phan tu mang: "; cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i << " la: "; cin >>a[i];
	}
}
int DemMangGiam(int a[], int n)
{
	for (int i = 0; i < n-1; i++) 
		// do sau a[n-1] =17 a[n]=\0 nen chi dung lai xet o a[n-1]
	{
		if (a[i] > a[i + 1]&&a[i+1]<=a[i+2]) s++;
	}
	if (a[n - 2] > a[n - 1]) s++;
	// 3 5 14 12 11 9 16 0 8 17
	return s;
}
int main()
{
	int a[100], n;
	NhapMang(a, n);
	cout << "Dem mang giam: " << DemMangGiam(a, n);
	return 0;
}