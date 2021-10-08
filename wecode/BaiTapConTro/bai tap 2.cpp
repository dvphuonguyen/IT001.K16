#include <iostream>
using namespace std;
int main()
{
	int *p;
	// p la bien con tro kieu du lieu la so nguyen
	// mien gia tri la dia chi o nho
	int a[10];
	// a la mang co kieu int vaf co toi da 10 phan tu
	for(int i=0;i<10;i++)
	{
		a[i]=i;
	}
	p=a;
	//p=a[0]
	for(int i=0;i<10;i++)
	{
		cout<<p[i]<<" ";
	}
	// 0 1 2 3 4 5 6 7 8 9 
	cout<<endl;
	for(int i=0;i<10;i++)
	{
		p[i]=p[i]+1;
	}
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	//1 2 3 4 5 6 7 8 9 10
	cout<<endl;
	return 0;
}
