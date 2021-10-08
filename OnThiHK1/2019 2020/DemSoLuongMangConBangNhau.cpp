// mang con: tu 3 pt tro len
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
int Dem(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[i + 1] && a[i] == a[i - 1] && a[i] == a[i - 2]) s++;
	}
	return s;
}
int main()
{
	int a[100], n;
	Input(a, n);
	cout<<"So luong mang con bang nhau la: "<<Dem(a, n);
	return 0;
}