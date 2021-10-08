#include <iostream>
#include <string.h>
#define maxc 100
using namespace std;
int dem(char a[])
{
	int s = 0;
	while (a[s] != '\0')
	{
		s++;
	}
	return s;
}
int main()
{
	char a[maxc]; int s = 0;
	cin.getline(a, maxc);
	for (int i = 0; i < dem(a); i++)
	{
		if ((a[i] < '0') && (a[i] > '9')) s++;
	}
	if (s == 0)
	{
		cout << "CHUOI KHONG HOP LE.";
	}
	else
	{
		cout << a;
	}

	return 0;
}