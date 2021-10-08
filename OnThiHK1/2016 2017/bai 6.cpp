#include <iostream>
using namespace std;
int main()
{
	int *a= new int [5];
	for(int i=0;i<5;i++)
	{
		a[i]=i+1;
		//1 2 3 4 5 
	}
	int *p=a;
	// p laf con tro, a la con tro too
	// * p=a = a[0]= 1
	cout<<"Gia tri *(p+2) = "<<*(p+2)<<endl;
	//3
	p+=2;
	//3
	cout<<"Gia tri *p = "<<*p<<endl;
	//3
	delete []a;
	return 0;
}
