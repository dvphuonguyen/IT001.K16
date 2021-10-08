#include <iostream>
using namespace std;
int main()
{
	int *p,*r,t[4]={0,1,2,3};
	p=new int [4];
	for(int i=0;i<4;i++) p[i]=6*(i+1);
	// 6 12 18 24
	r=t;
	for(int i=3;i>=0;i--) r[i]-=1;
	// 2 1 0 -1
	r[2]=8;
	// 2 8 0 -1
	for (int i=0;i<4;i++) t[i]=p[i]+r[i];
	// 6 12 18 24
	// -1 0 8 2
	for(int i=0;i<4;i++) cout<<t[i]<<" ";
	// 5 12 26 26
	delete [] p ;
	return 0;
}
