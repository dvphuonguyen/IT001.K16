// viet chuong trinh bac hai trong do su dung ham tinh denta
#include<bits/stdc++.h>
using namespace std;
float denta(int a, int b, int c)
{
	return ((float(b)*b)-4*a*c);
}
int main()
{
	int a,b,c;
	cout<<"Nhap so nguyen a: "<<endl; cin>>a;
	cout<<"Nhap so nguyen b: "<<endl; cin>>b;
	cout<<"Nhap so nguyen c: "<<endl; cin>>c;
	float d=denta(a,b,c);
	if(d==0) cout<<" Phuong trinh co mot nghiem: x= "<<float(-b)/(2*a);
	else if(d<0) cout<<"Phuong trinh vo nghiem";
	else
	{ 
	cout<<"Phuong trinh co hai nghiem phan biet: "<<endl;
	cout<<"x1= "<<(-b+sqrt(float (a)))/(2*a)<<endl;
	cout<<"x2= "<<(-b-sqrt(float (a)))/(2*a)<<endl;
	}
	return 0;
}
