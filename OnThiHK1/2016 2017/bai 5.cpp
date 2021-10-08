# include <iostream>
using namespace std;
int main()
{
	int a=3200;
	int *ptr;
	int value;
	ptr=&a;
	value=--(*ptr);
	cout<<" value = "<<value<<endl;
	cout<<"&value = "<<&value<<endl;
	cout<<" *ptr = "<<*ptr<<endl;
	cout<<" ptr = "<<ptr<<endl;
	cout<<" & prt = "<<&ptr<<endl;
	cout<<" a = "<<a<<endl;
	// cout<<" *(*ptr) = "<<*(*ptr)<<endl; => error: ve cu phap
	return 0;
}
