#include<iostream>
#include<string.h>
using namespace std;
int Dem(char a[])
{
	int s = 0;
	while (a[s] != '\0') s++;
	return s;
}
void xoapt(char a[], int& n, int vt)
{
	for (int i = vt; i < n; i++)
	{
		a[i + 1] = a[i];
	}
	n--;
}
void XoaSpace(char a[], int & n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == ' ' && a[i + 1] == ' ') xoapt(a, n, i);
	}
	if (a[0] == ' ') xoapt(a, n, 0);
	if (a[n - 1] == ' ') xoapt(a, n, n - 1);
	a[n] = '\0';
}
void exchange(char a[], int n)
{
	XoaSpace(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[0] != ' ' && a[0] >= 'a' && a[0] <= 'z') a[0] = a[0] - 32;
		if (a[i] >= 'a' && a[i] <= 'z' && a[i - 1] == ' ') a[i] = a[i] - 32;
		if (a[i] >= 'A' && a[i] <= 'Z' && a[i - 1] != ' ')a[i] = a[i] + 32;
		cout << a[i];
	}
}
int main()
{
	char a[1000];
	cin.getline(a, 1000);
	int n = Dem(a);
	exchange(a, n);
	return 0;
}