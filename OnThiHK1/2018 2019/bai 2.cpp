#include <iostream>
using namespace std;
void find(int &a, int &b, int c)
{
	int t=a;
	//1
	c=a+b;
	// 1+3=4
	a=b;
	//3
	b=2*t;
	//2
}
int main()
{
	int one, two, three;
	one=1;
	two=3;
	three=5;
	find (one, two, three);
	cout<<one<<", "<<two<<", "<<three<<endl;
	//3, 2, 5
	return 0;
}
