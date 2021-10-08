#include <iostream>
using namespace std;
int main()
{
	int a, b; cin >> a >> b;
	switch (a)
	{
	case 0: 
	{
		if (b == 0) cout << "khong ";
		break;
	}
	case 1:
	{
		cout << "muoiwj ";
		break;
	}
	case 2:
	{
		cout << "hai muoiw ";
		break;
	}
	case 3:
	{
		cout << "ba muoiw "; break;
	}
	case 4:
	{
		cout << "bon muoiw "; break;
	}
	case 5:
	{
		cout << "nam muoiw "; break;
	}
	case 6:
	{
		cout << "sau muoiw ";
		break;
	}
	case 7:
	{
		cout << "bay muoiw ";
		break;
	}
	case 8:
	{
		cout << "tam muoiw ";
		break;
	}
	case 9:
	{
		cout << "chin muoiw ";
		break;
	}
	}
	switch (b)
	{
	case 0:
	{
		break;
	}
	case 1:
	{
		if (a < 2) cout << "mootj";
		else cout << "moots";
		break;
	}
	case 2:
	{
		cout << "hai"; break;
	}
	case 3:
	{
		cout << "ba"; break;
	}
	case 4:
	{
		if (a < 2) cout << "bon";
		else cout << "tu";
		break;
	}
	case 5:
	{
		if (a == 0) cout << "nam";
		else cout << "lam";
		break;
	}
	case 6:
	{
		cout << "sau"; break;
	}
	case 7:
	{
		cout << "bay"; break;
	}
	case 8:
	{
		cout << "tam"; break;
	}
	case 9:
	{
		cout << "chin"; break;
	}
	}
	return 0;
}
