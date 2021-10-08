#include <iostream>
using namespace std;
int main()
{
	int x=6;
	int &y = x;
	int *k= &x;
	x=2020;
	cout<<"Gia tri cua k: "<<k<<endl;
	cout<<"Gia tri cua &k: "<<&k<<endl;
	cout<<"Gia tri cua *k : "<<*k<<endl;
	cout<<"Gia tri cua y : "<<y<<endl;
	cout<<"Gia tri cua &y : "<<&y<<endl;
	return 0;
}
