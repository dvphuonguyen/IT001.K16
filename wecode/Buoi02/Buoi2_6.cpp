#include <iostream>
#include <math.h>
using namespace std;
void tongsonguyenduong(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += i
	}
	cout << "Tong so nguyen duong: " << s << endl;
}
void xuattongvacachtinh(int n)
{
	int s = 0;
	cout << "S(" << n << ") = 1";
	for (int i = 1; i <= n; i++)
	{
		s += i
			cout << " + " << i;
	}
	cout << " = " << s << endl;
}
void xuatcong(int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << "i = " << i << endl;
		cout << "S(" << i << ") = ";
		if()
	}
}
void xuattongvacachtinhvai(int n)
{
	if (n == 0) cout << "S(0) = 0" << endl;
	else if (n == 1)
	{
		cout << "i = 1" << endl;
		cout << "S(1) = 1" << endl;
	}
	else
	{
		for (int i = 2; i <= n; i++)
		{
			cout << "i = " << i << endl;
			cout << "S(" << i << ") = 1";
			for (int j = 2; j <= i; j++)
			{
				cout << " + " << j;
			}
			cout << endl;
		}
	}
}
void tongphanso(int n)
{
	float s = 0;
	if (n == 0) cout << "S(0) = 0" << endl;
	else if (n == 1) cout << "S(1) = 1" << endl;
	else
	{
		cout << "S(" << n << ") = 1";
		for (int i = 2; i <= n; i++)
		{
			cout << " + 1/" << i;
			s += 1.0 / i;
		}
		cout << " = " << s << endl;
	}
}
void xuatuoc(int n)
{
	cout << "Uoc cua so nguyen " << n << " la : ";
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) cout << i << " ";
	}
	cout << endl;
}
void timsodaonguoc(int n)
{
	int s = 0; int a;
	while (n != 0)
	{
		a = n % 10;
		s = s * 10 + a;
		n = n / 10;
	}
	cout << "So dao nguoc cua " << n << " la : " << s << endl;
}
int snt(int n)
{
	if (n == 0 || n == 1) return 0;int s = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{	
		if (n % i == 0) s++;
	}
	if (s == 0) return 1;
	esle return 0;
}
void xuatsnt(int n)
{
	cout << "Cac so nguyen to trong " << n << " la : ";
	for (int i = 2; i <= n; i++)
	{
		if (snt(i) == 1) cout << i << " ";
	}
	cout << endl;
}
int sohoanhao(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0) s += i;
	}
	if (n == s) return 1;
	else return 0;
}
void sohoanthien(int n)
{
	cout << "So hoan thien trong " << n << " la :";
	for (int i = 1; i <= n; i++)
	{
		if (sohoanhao(i) == 1) cout << i << " ";
	}
	cout << endl;
}
void xuatuoclelonnhat(int n)
{
	int ln;
	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0 && i % 2 == 1 && ln < i)
			ln = i;
	}
	cout << "Uoc so le lon nhat trong " << n << " la : " << ln << endl;
}
void xuattheothutudaonguoc(int n)
{
	int a;
	cout << "Thu tu dao nguoc cua " << n << " la : ";
	while (n != 0)
	{
		a = n % 10;
		cout << a << " ";
		n = n / 10;
	}
	cout << endl;
}
int main()
{

}