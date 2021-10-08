#include <iostream>
using namespace std;
int main()
{
	int a[5];
	int *p= a;
	int x=2;
	for(int i=0;i<5;i++) a[i]=i;
	// lenh se duoc them va nhan xet
	p=a[0];
	// sai vi p co mien gia tri la dia chi o nho nen khong the gans p = gia tri cua a[0] la mot so nguyen
	p[1]=x-2;
	// dung vif p[1]=a[1] co kieu du lieu la so nguyen =x-2=0
	return 0;
}
