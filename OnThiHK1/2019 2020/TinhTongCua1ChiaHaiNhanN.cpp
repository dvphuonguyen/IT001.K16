#include<iostream>
using namespace std;
float TinhTong(int n)
{
	if (n == 1) return (1.0 / 2);
	return (1.0) /(2* n) + TinhTong(n - 1);
}
int main()
{
	int n; 
	cout << "Nhap so nguyen duong n: "; cin >> n;
	cout << "Tong cua 1/2*x chay tu 1 den n la : " << TinhTong(n);
	return 0;
}
