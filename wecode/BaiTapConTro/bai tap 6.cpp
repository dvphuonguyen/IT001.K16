#include <iostream>
using namespace std;
int main()
{
	int *p = new int ;
	*p=30;
	int x=20;
	cout<<*p<<" "<<x<<endl;
	// 30 20
	delete p;
	p=&x;
	delete p;
	cout<<*p<<" "<<x<<endl;
	return 0;
}
