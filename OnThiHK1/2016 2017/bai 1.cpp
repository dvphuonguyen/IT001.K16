#include <iostream>
using namespace std;
void hamf(int x, int &y)
{
	x=x+y;
	y=x-y;
	x=x-y;
}
int main()
{
	int a=1, b=2;
	hamf(a,b);
	cout<<" a = "<<a<<endl;
	cout<<" b = "<<b<<endl;
	return 0;
}
