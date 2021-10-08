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
		if (a[i] == ' ' && a[i + 1] == ' ')
		{
			xoa(a, i);
			i--;
		}
		if (a[0] == ' ') xoa(a, 0);
		if (a[n - 1] == ' ') xoa(a, n - 1);
	}
}
void doichuthuong(char* a)
{
	int n = strlen(a);
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 65 && a[i] <= 90 && a[i] != 0) a[i] += 32;
	}
}
void biendoi(char* a)
{
	xoakhoangtrang(a);
	doichuthuong(a);
	int n = strlen(a);
	a[0] = toupper(a[0]);
	cout << a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] == ' ') a[i + 1] = toupper(a[i + 1]);
		cout << a[i];
	}
}
int main()
{
	char a[maxc]; cin.getline(a, maxc);
	biendoi(a);
	return 0;
}