#include<iostream>
using namespace std;
int s;
int daonguoc(int n)
{
	if (n == 0) return 0;
	else
	{
		s = s * 10 + n % 10;
		daonguoc(n / 10);
	}
	return s;
}
int main()
{
	int n; cin >> n;
	cout << daonguoc(n);
	return 0;
}