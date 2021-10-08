#include <iostream>
using namespace std;
int main ()
{
	int x=3;
	&x = 0x28fefc;
	int &y=x;
	int *p=&x;&p= 0x28fef8;
	//p= &x= 0x28fefc
	x=2019;// *p= x= y= 2019
	cout<<"p = "<<p<<endl;
	// 0x28fefc
	cout<<"*p = "<<*p<<endl;
	// 2019
	cout<<"&p = "<<&p<<endl;
	// 0x28fef8
	cout<<"y = "<<y<<endl;
	// 2019
	return 0;
}
