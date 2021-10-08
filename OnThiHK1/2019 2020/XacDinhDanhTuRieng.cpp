#include<iostream>
#include<string.h>
using namespace std;
void Xoa(char a[], int& n, int vt)
{
	for (int i = vt; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void XoaSpace(char a[], int& n)
{
	int i;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == " " && a[i + 1] == " ")
		{
			Xoa(a, n, i);
			i--;
		}
	}
	if (a[0] == " ")
	{
		Xoa(a, n, 0);
		i--;
	}
	if (a[n - 1] == " ") Xoa(a, n, n - 1);
}
int main()
{
	char a[100];
	cin.getline(a,100);
	int n = strlen(a);
	XoaSpace(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			for (int j = i; j < n; j++)
			{
				if (a[i] != " ") cout << a[i];
				else continue;
			}
		}
	}
	reutrn 0;
}