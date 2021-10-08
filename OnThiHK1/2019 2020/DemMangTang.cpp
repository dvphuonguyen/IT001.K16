#include <iostream>
using namespace std;
void NhapMang(int a[], int& n)
{
	do
	{
		cout << "Nhap so luong phan tu : "; cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
	cin >> a[i];
	}
}
void xoa(int a[], int& n, int vt)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void rutgon(int a[], int &n, int k)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == k)
		{
			xoa(a, n, i);
			i--;
		}
	}
}
void exchange(int a[], int n)
{
	for (int i = 0; i < n;i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] == a[i + 1])
			{
				rutgon(a, n, a[i]);
			}
		}
	}
}
int DemMangTang(int a[], int &n)
{
	int s = 0;
	exchange(a, n);
	for (int i = 0; i < n-1; i++)
	{
		// 1 2 2 3 2 4
		// 1 2 3 2 4
		//1 2 3 
		if (a[i] < a[i + 1]&&a[i+1]>a[i+2]) s++;
		// 30 9 10 8
	}
	return s;
}

int main()
{
	int a[1000], n;
	NhapMang(a, n);
	cout << "Dem mang tang: " << DemMangTang(a, n);
	return 0;
}
