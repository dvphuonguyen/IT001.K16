#include <iostream>
using namespace std;
void Ham(int *&a)
{
	a=new int[5];
	for(int i=0;i<5;i++)
	{
		a[i]=i+1;
	}
}
int main()
{
	int n=5;
	int *a=&n;
	cout<<"Gia tri cua * a = "<<*a<<endl;
	// *a=n=5;
	Ham(a);
	cout<<"Gia tri cua * a = "<<*a;
	//*a=*a[0]=1; do *&a nen gia tri thay doi
	return 0;
}
