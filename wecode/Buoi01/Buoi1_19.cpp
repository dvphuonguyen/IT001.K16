#include <iostream>
using namespcae std;
void hinhchunhatrong(int n)
{
	int n = 4; int m = 5;
	for (int j = 0; j < n; j++)
	{
		cout << "4 ";
	}
	cout << endl;
	for (i = 0; i < m-2; i++)
	{
		cout << "4 ";
		for (int j = 0; j < n-2; j++) 
		{
			cout << "  ";
		}
		cout << "4" << endl;
	}
	for (int j = 0; j < n; j++)
	{
		cout << "4 ";
	}
	cout << endl;
}
void lamtron(float n, int d)
{
	cout << "Nhap so thuc n : "; cin >> n;
	cout << "Nhap so nguyen d: "; cin >> d;
	cout << "So thuc " << n << " lam tron sau dau phay " << d << " don vi la: " << roundf((n)*pow(10 / d) / pow(10 / d)) << endl;
}
void swap(int& a, int& b)
{
	int t = a; a = b; b = t;
}
void sapxepsothuc(float a, float b, float c)
{
	cout << "Nhap so thuc a : "; cin >> a;
	cout << "Nhap so thuc b : "; cin >> b;
	cout << "Nhap so thuc c : "; cin >> c;
	cout << "Thu tu tang dan cua " << a << " , " << b << " , " << c << " la : ";
	if (a > b) swap(a, b);
	if (a > c) swap(a, c);
	if (b > c) swap(b, c);
	cout << a << " , " << b << " , " << c << endl;

}
int main()
{
	int q;
	float n, a, b, c;
	hinhchunhatrong(q);
	lamtron(n);
	sapxepsothuc(a, b, c);
	return 0;
}