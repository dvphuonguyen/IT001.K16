#include<iostream>
using namespace std;
struct Point 
{
	float x; float y;
};
typedef Point p;
void CmpDis(p a, p b)
{
	int d1= a.x*a.x+a.y*a.y;
	// khoang cach tu goc to do den a ( binh phuong)
	int d2= b.x*b.x+b.y*b.y;
	// khoang cach tu goc to do den b ( binh phuong)
	if(d1>d2) cout<<" Da > Db";
	else if(d1<d2) cout<<"Da < Db";
	else cout<<"Da = Db";
}
int main()
{
	p a; p b;
	a.x= 1;
	a.y= 2;
	b.x= 3;
	b.y= 4;
	CmpDis(a,b);
	return 0;
}
