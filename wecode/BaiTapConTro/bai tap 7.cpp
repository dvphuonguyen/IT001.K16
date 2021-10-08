#include <iostream>
using namespace std;
int main()
{
	const int size=10;
	int a[size];
	for(int i=0;i<size;i++)
	{
		a[i]=i;
	}
	int *b;
	b=new int [size];
	for(int i=0;i<size;i++)
	{
		b[i]=a[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<" "<<b[i]<<endl;
		//0 0
		//1 1
		//2 2
		//3 3
		//....
	}
	return 0;
	
}
