#include <iostream>
using namespace std;
int main()
{
	int *a=new int [10];
	for(int i=0;i<10;i++)
	a[i]=i;
	while(*a<9)
	{
		a++;
		cout<<*a<<" ";
		//1 2 3 4 5 6 7 8 9
	}
	return 0;
 } 
