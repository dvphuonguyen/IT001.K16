// chuong trinh bao loi vi
#include <iostream>
using namespace std;
int main()
{
	int *p,*r;
	p=new int;
	r= new int;
	p=1;
	// p la bien con tro kieu so nguyen
	// mien gia tri cua p la dia chi o nho
	// trong khi do lai gan p = gia tri cu the
	// sua lai: *p=1 ; / p=&1;
	r=p;
	return 0;
}
