#include<iostream>
using namespace std;
int main()
{
	int *a=new int [10];
	int *p=a;
	for(int i=0;i<10;i++)
	a[i]=i;
	p[0]=10;
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
