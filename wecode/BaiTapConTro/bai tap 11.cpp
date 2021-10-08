#include <iostream>
using namespace std;
void ham(int *a)
// doi dia chi, bien tha chieu
{
	a= new int [5];
	for(int i=0;i<5;i++) a[i]=i+1;
}
int main()
{
	int n=5;
	int *a=&n;
	cout<<" Gia tri * a = "<<*a;
	// gia tri *a = 5
	ham(a);
	cout<<" Gia tri * a ="<< *a;
	// gia tri *a = 1 SAI ROI
	// SUA: DO HAM KHONG CO LUU LAI GIA TRI NEN TA VAN GIU NGUYEEN GIA TRI BAN DAU CUA NO HOACWJ DO THAY DOI MA LAY GIA TRI CUOI CUNG
	return 0;
}
