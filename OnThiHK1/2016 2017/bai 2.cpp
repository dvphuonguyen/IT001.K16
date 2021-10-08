#include <iostream>
using namespace std;
struct PhanSo
{
	int Tu;
	int Mau;
};
typedef PhanSo ps;
// tim uoc chung lon nhat
int UCLN(int a, int b)
{
	if(a==b) return a;
	else if (a>b) return UCLN(a-b,b);
	else return UCLN(a,b-a);
}
int BCNN(int a, int b)
{
	return a*b/UCLN(a,b);
}
ps TinhTong(ps a, ps b)
{
	ps c;
	c.Tu=a.Tu*BCNN(a.Mau,b.Mau)/a.Mau+b.Tu*BCNN(a.Mau,b.Mau)/b.Mau;
	c.Mau=BCNN(a.Mau,b.Mau);
	int d=c.Tu;
	int e=c.Mau;
	int f=UCLN(e,d);
	c.Tu=c.Tu/f;
	c.Mau=c.Mau/f;
	return c;
}
int main()
{
	ps x,y,s;
	x.Tu=1;x.Mau=2;
	y.Tu=3;y.Mau=4;
	s=TinhTong(x,y);
	cout<<"Phan so s: ";
	cout<<s.Tu<<" / "<<s.Mau;
	// 5/4
	return 0;
	
}
