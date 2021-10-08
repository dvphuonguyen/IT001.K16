#include <iostream>
#define maxc 100
using namespace std;

int length(char a[])
{
	int s = 0;
	while (a[s] != '\0')
	{
		s++;
	}
	return s;
}
void xuat(char a[])
{
	cout << "{";
	for (int i = 0; i < length(a) - 1; i++)
	{
		cout << "' " << a[i] << " ', ";
	}
	cout << "' " << a[length(a) - 1] << " ' }" << endl;
}
void noi(char a[], char b[], char c[])
{
	for (int i = 0; i < length(a); i++)
	{
		c[i] = a[i];
	}
	c[length(a)] = ' ';
	for (int i = length(a) + 1; i < length(a) + length(b) + 1; i++)
	{
		c[i] = b[i - length(a) - 1];
	}
	xuat(c);
}
void doichuhoa(char a[], char b[], char c[])
{
	a[0] -= 32;
	b[0] -= 32;
	noi(a, b, c);
}
void dem(char a[])
{
	int s = 0;
	char x;
	cout << "Nhap ki tu can dem: "; cin >> x;
	for (int i = 0; i < length(a); i++)
	{
		if (a[i] == x || a[i] - 32 == x || a[i] + 32 == x) s++;
	}
	cout << "So lan ki tu " << x << " xuat hien la: " << s;
}
void tansuat(char a[])
{
	int s[maxc];
	cout << "Tan suat: " << endl;
	for (int i = 0; i < length(a); i++)
	{
		if (a[i] != '\0')
		{
			s[a[i]]++;
		}
	}
	for (int i = 0; i < length(a); i++)
	{
		if (s[a[i]] != 0)
		{
			cout << a[i] << " : " << s[a[i]] << endl;
		}
	}
}
int main()
{
	char ho[maxc], ten[maxc], tong[maxc];
	cout << "Nhap ho: "; cin >> ho;
	cout << "Nhap ten: "; cin >> ten;
	cout << "Ho= "; xuat(ho);
	cout << "Ten= "; xuat(ten);
	cout << "Noi hai chuoi= ";  noi(ho, ten, tong);
	cout << "Hoa= "; doichuhoa(ho, ten, tong);
	dem(noi(ho, ten, tong)); cout << endl;
	tansuat(noi(ho, ten, tong));
	return 0;
}