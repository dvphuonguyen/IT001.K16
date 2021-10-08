#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	do
	{
		cout << "Nhap so nguyen n: "; cin >> n;
	} while (n <= 10);
	float s=0;
	for (int i = 1; i < n; i++)
	{
		s = sqrt(i + s);
	}
	cout << "Gia tri cua bieu thuc la: " << s;
	return 0;
}