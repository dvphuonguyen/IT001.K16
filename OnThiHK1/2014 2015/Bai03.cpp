#include <iostream>
#include <math.h>
using namespace std;
void nhap(int a[], int& n)
{
	cout << "Nhap n:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int snt(int n)
{
	if (n < 2) return 0;
	for (int i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}
int max(int a[], int n)
{
	int s = 0;
	int i = 0;
	while (snt(a[i]) == 0 && i < n) s++;
	if (s == n) return 0;
	int m = i;
	for (int i = 0; i < n; i++)
	{
		if (snt(a[i]) == 1 && a[i] > a[m]) m = i;
	}
	return a[m];
}
int doixung(int a[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		if (a[i] != a[n - 1 - i]) return 0;
	}
	return 1;
}
int main()
{
	int a[100], n;
	nhap(a, n);
	cout << "Max: " << max(a, n);
	int k = doixung(a, n);
	if (k > 0) cout << "Doi xung.";
	else cout << "Khong doi xung.";
	return 0;
}