#include <iostream>
#define maxc 100
using namespace std;
void nhap(int a[],int &n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}
void xuatdaonguoc(int a[], int n)
{
	cout << "Xuat dao nguoc cac gia tri: " << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << endl;
	}
}
void tongmang(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += a[i];
	}
	cout << "Tong mang la: " << s << endl;
}
int max(int a[], int n)
{
	int ln = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > ln) ln = a[i];
	}
	return ln;
}
void xuatmax(int a[], int n)
{
	cout << "Max: " << max(a,n) << endl;
}
void xuatvitrimax(int a[], int n)
{
	cout << "Vi tri lon nhat la: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] == max(a, n)) cout << i << " ";
	}
	cout << endl;
}
void swap(int &a, int &b)
{
	int t = a; a = b; b = t;
}
void tangdan(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n-1; j > i; j--)
		{
			if (a[j] > a[j-1]) swap(a[j], a[j-1]);
		}
	}
	cout << "Mang tang dan: " << endl;
}
int main()
{
	int a[maxc], n;
	cin >> n;
	nhap(a, n);
	xuat(a, n);
	xuatdaonguoc(a, n);
	tongmang(a, n);
	xuatmax(a, n);
	xuatvitrimax(a, n);
	tangdan(a, n);
	xuat(a, n);
	return 0;
}
