//Giai phuong trinh bac 2 a khac 0
#include<bits/stdc++.h>
using namespace std;
int main()
{
	float a,b,c;
	cin>>a;cin>>b;cin>>c;
	float d;
	d=(b*b)-4*a*c;
	
	float x=(-b)/(2*a);
	float x1=(-b-sqrt(d))/(2*a);
	float x2=(-b+sqrt(d))/(2*a);
	if(d==0) cout<<"("<<x<<","<<x<<")";
	else if(d<0) cout<<"Vo nghiem";
	else cout<<"("<<x1<<","<<x2<<")";
	return 0;
}
