#include <iostream>
#include <string.h>
#define maxc 100
using namespace std;
void xoa(char a[], int vitricanxoa)
{
	int n = strlen(a);
	for (int i = vitricanxoa; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	a[n - 1] = '\0';
}
void xoakhoangtrang(char* a)
{
	int n = strlen(a);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == ' ' && (a[i + 1] == ' ' || a[i + 1] == '.' || (a[i - 1] == '.' && a[i + 1] != ' ')))
		{
			xoa(a, i);
		}
	}
	if (a[0] == ' ') xoa(a, 0);
	if (a[n - 1] == ' ') xoa(a, n - 1);
}
void themkhoangtrang(char* a)
{
	int n = strlen(a);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == '.' && i < n - 1)
		{
			for (int j = n - 1; j >= i + 1; j--)
			{
				a[j + 1] = a[j];
			}
			a[i + 1] = ' ';
		}
	}
}
void xuat(char a[])
{
	int n = strlen(a);
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
}
void chuanhoa(char* a)
{
	xoakhoangtrang(a);
	themkhoangtrang(a);
	xuat(a);
}
int main()
{
	char a[maxc]; cin.getline(a, maxc); cout << a;
	chuanhoa(a);
	return 0;
}