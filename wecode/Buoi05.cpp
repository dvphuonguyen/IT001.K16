#include <iostream>
#include <cmath>
using namespace std;

void nhap(int a[][100], int& m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}
void xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
}
void xuatgiatriobien(int a[][100], int m, int n)
{
	cout << "Cac gia tri bien cua ma tran la: ";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
			{
				cout << a[i][j] << " ";
			}
		}
	}
	cout << endl;
}
void tongmatran(int a[][100], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			s += a[i][j];
		}
	}
	cout << "Tong cac gia tri cua ma tran la: " << s << endl;
}
void tongcacgiatrichancuamatran(int a[][100], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0) s += a[i][j];
		}
	}
	cout << "Tong cac gia tri chan cua ma tran la: " << s << endl;
}
int snt(int x)
{
	int s = 0;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0) s++;
	}
	if (s == 0) return 1;
	else return 0;
}
void tongcacgiatrasnttrongmatran(int a[][100], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (snt(a[i][j]) == 1) s += a[i][j];
		}
	}
	cout << "Tong cac gia tri la so nguyen to trong ma tran la: " << s << endl;
}
int max(int a[][100], int m, int n)
{
	int ln = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > ln) ln = a[i][j];
		}
	}
	return ln;
}
void xuatgiatrilonnhat(int a[][100], int m, int n)
{
	cout << "Gia tri lon nhat cua ma tran la: " << max(a, m, n) << endl;
}
void xuatvitricuagiatrilonnhattrongmatran(int a[][100], int m, int n)
{
	cout << "Vi tri lon nhat: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == max(a, m, n)) cout << "(" << i << ", " << j << ")" << endl;
		}
	}
}
int kt(int x)
{
	if (x % 2 == 0 && x > 9 && x < 21) return 1;
	else return 0;
}
void xuatcacgiatrithoamandieukien(int a[][100], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (kt(a[i][j]) == 1) s++;
		}
	}
	if (s == 0) cout << "Ma tran khong ton tai gia tri thoa dieu kien.";
	else
	{
		cout << "Ma tran ton tai cac gia tri thoa dieu kien tai vi tri: " << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if(kt(a[i][j])==1) cout<<"("<<i<<", "<<j<<")"<<endl;
			}
		}
	}
}
int main()
{
	int a[100][100], m, n; cin >> m >> n;
	nhap(a, m, n); xuat(a, m, n);
	xuatgiatriobien(a, m, n);
	tongmatran(a, m, n);
	tongcacgiatrichancuamatran(a, m, n);
	tongcacgiatrasnttrongmatran(a, m, n);
	xuatgiatrilonnhat(a, m, n);
	xuatvitricuagiatrilonnhattrongmatran(a, m, n);
	xuatcacgiatrithoamandieukien(a, m, n);
	return 0;
}
 
