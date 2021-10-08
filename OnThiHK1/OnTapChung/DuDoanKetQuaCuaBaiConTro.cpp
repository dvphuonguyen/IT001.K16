#include <iostream>
using namespace std;
int main()
{
	const int i=20;
	const int *const p=&i;
	cout<<*p<<endl;
	cout<<i;
	return 0;
}
