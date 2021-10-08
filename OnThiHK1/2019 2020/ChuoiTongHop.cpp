#include <iostream>
using namespace std;
char c[100]; char a[100]; char b[100];
int Length(char a[])
{
	int s = 0;
	while (a[s] != '\0') s++;
	return s;
}
void Output(char a[])
{
	cout << "{ ";
	for (int i = 0; i < Length(a); i++)
	{
		cout << "'" << a[i] << "' ";
	}
	cout << "}"<<endl;
}
void NoiHaiChuoi(char a[], char b[])
{
	int k = Length(a) + Length(b) +1;
	//2 +6+1
	for (int i = 0; i < Length(a); i++)
	{
		c[i] = a[i];
	}
	// vo 2
	//nguyen 6
	//012345
	// vo nguyen 9
	// 012345678
	//k -1= 9 - i +
	c[Length(a)] = ' ';
	for (int i = Length(a) + 1; i < k; i++)
	{
		c[i] = b[i - Length(a) -1];
	}
	c[k] = '\0';
	Output(c);
}
void VietHoa(char c[])
{
	if (c[0] != ' ' && c[0] >= 'a' && c[0] <= 'z') c[0] -= 32;
	for (int i = 0; i < Length(c); i++)
	{
		if (c[i - 1] == ' ' && c[i] >= 'a' && c[i] <= 'z') c[i] -= 32;
	}
	Output(c);
}
void DemKiTuGiongNhau(char a[])
{
	char k;
	int s = 0;
	cout << "Nhap ki tu bat ki: "; cin >> k;
	for (int i = 0; i < Length(a); i++)
	{
		if (a[i] == k+32 || a[i] == k-32 || a[i] == k) s++;
	}
	cout << "So ki tu giong voi ki tu " << k << " trong mang la: " << s<<endl;
}
int Dem(char a[], char b)
{
	int s = 0;
	for (int i = 0; i < Length(a); i++)
	{
		if (a[i] == b+32 || a[i] == b-32 || a[i] == b) s++;
	}
	return s;
}
void Swap(char& a, char& b)
{
	char t = a; a = b; b = t;
}
void SapXep(char c[])
{
	cout << "Chuoi ban dau la : "; NoiHaiChuoi(a, b);
	for (int i = 0; i < Length(c); i++)
	{
		for (int j = i+1; j < Length(c); j++)
		{
			if (c[i] >=c[j]) swap(c[i], c[j]);
		}
	}
}
void TanSuat(char a[])
{	
	SapXep(c);
	cout << "Tan suat cua cac ki tu la: " << endl;
	for (int i = 0; i < Length(a); i++)
	{
		if(a[i]!=' '&&a[i]!=a[i+1]) cout << a[i] << ": " << Dem(a, a[i]) << endl;
	}
}
int main()
{
	cout << "Nhap ho: "; cin >> a;
	cout << "Nhap ten: "; cin >> b;
	cout << "Xuat ho: ";
	Output(a);
	cout << "Xuat ten: ";
	Output(b);
	cout << "Noi hai chuoi la: ";
	NoiHaiChuoi(a, b);
	cout << "Chuoi viet hoa la: ";
	VietHoa(c);
	DemKiTuGiongNhau(c);
	TanSuat(c);
	return 0;
}