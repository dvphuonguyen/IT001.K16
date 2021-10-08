#include<iostream>
using namespace std;
int Length(char a[])
{
	int s = 0;
	while (a[s] != '\0') s++;
	return s;
}
int Check(char a[])
{
	for (int i = 0; i < Length(a); i++)
	{
		if (a[i] != ' ') return 0;
	}
	return 1;
}
void swap(char& a, char& b)
{
	char t = a; a = b; b = t;
}
void SapXep(char a[])
{
	for (int i = 0; i < Length(a); i++)
	{
		for (int j = i + 1; j < Length(a); j++)
		{
			if (a[i] > a[j]) swap(a[i], a[j]);
		}
	}
}
int Dem(char a[], char b)
{
	int s = 0;
	for (int i = 0; i < Length(a); i++)
	{
		if (a[i] == b) s++;
	}
	return s;
}
void TanSuat(char a[])
{
	SapXep(a);
	for (int i = 0; i < Length(a); i++)
	{
		if (a[i] != a[i + 1])
		{
			cout << a[i] << " : " << Dem(a, a[i]) << endl;
		}
	}
}
int main()
{
	char a[100];
	cout << "Nhap chuoi ki tu: "; cin.getline(a, 100);
	int n = Length(a);
	if (Check(a) == 1) cout << "Chuoi rong." << endl;
	else
	{
		cout << "So lan xuat hien cua tung ki tu la: " << endl;
		TanSuat(a);
	}
	return 0;
}