#include <iostream>
using namespace std;
void hamf(int * &a)
{
	a=new int [5];
	for(int i=0;i<5;i++)
	{
		a[i]=i+1;
	}
}
int main()
{
	int n=5;
	int *a=&n;
	cout<<"Gia tri cua *a = "<<*a<<endl;
	// 5 do *a=n=5
	hamf(a);
	cout<<"Gia tri cua *a = "<<*a<<endl;
	// 1 do *a=a[0]( do ham * &a) = 1+0
	return 0;
}
