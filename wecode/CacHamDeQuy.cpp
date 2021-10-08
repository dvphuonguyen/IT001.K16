#include <iostream>
using namespace std;
int tong(int n)
{
	if (n == 0) return 0;
	else return n + tong(n - 1);
}
int tongbinhphuong(int n)
{
	if (n == 1) return 1;
	else return n * n + tongbinhphuong(n - 1);
}
float tongphanso(int n)
{
	if (n == 0) return 0;
	else return (1.0 / n) + tongphanso(n - 1);
}
int tich(int n)
{
	if (n == 1) return 1;
	else return n * tich(n - 1);
}
int mu(int x, int n)
{
	if (n == 0) return 1;
	else return x * mu(x, n - 1);
}
void dem(int n)
{
	int a;
	while (n != 0)
	{
		s++;
		dem(n / 10);
	}
}
int tonghailannghich(int n)
{
	if (n == 0) return 0;
	else return (1.0 / (2 * n)) + tonghailannghich(n - 1);
}
int tongnghich(int n)
{
	if (n == 0) return 0;
	else return (1.0 / (n * (n + 1))) + tongnghich(n - 1);
}
int tongphansotrenchiaduoi(int n)
{
	if (n == 0) return 0;
	else return (n.0 / (n + 1)) + tongphansotrenchiaduoi(n - 1);
}

int main()
{

}