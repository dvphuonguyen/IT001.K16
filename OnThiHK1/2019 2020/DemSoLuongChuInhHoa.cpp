#include <iostream>
using namespace std;
int Length(char a[100])
{
	int s = 0;
	while (a[s] != "\0") s++;
	return s;
}
int DemChuInHoa(char a[])
{
	int s = 0;
	for (int i = 0; i < Length(a); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z') s++;
	}
	return 0;
}
int main()
{
	char a[100];
	cin.getline(a, 100);
	cout << "Dem chu in hoa: " << DemChuInHoa(a);
	return 0;
}