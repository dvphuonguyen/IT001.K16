#include <iostream>
using namespace std;
void f1(int *t)
{
	*t=99;
}
int main()
{
	int *p1,*p2;
	p1= new int ;
	*p1 = 50;
	p2=p1;
	//p2=p1=50
	f1(p2);
	//p2=99=p1
	cout<<*p1<<" "<<*p2<<endl;
	//99 99
	p1=new int ;
	*p1=88;
	cout<<*p1<<" "<<*p2<<endl;
	//88 99
	delete p1;
	delete p2;
}
