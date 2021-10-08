// viet chuong trinh tim nghiem phuong trinh trung phuong trong do co xay dung ham tim nghiem phuong trinh bac hai.
#include<bits/stdc++.h>
using namespace std;
float giaiptbac2_1(int a, int b,int c)
{ 
	float x1,x2;
	int d=b*b-4*a*c;
	x1=(-b-sqrt(d))/(2*a);
	return x1; 
	
}
float giaiptbac2_2(int a, int b,int c)
{ 
	float x1,x2;
	int d=b*b-4*a*c;
	x2=(-b+sqrt(d))/(2*a);
	return x2; 
	
}
int main()
{
	int a,b,c;
	cout<<"Nhap so nguyen a: "<<endl;cin>>a;
	cout<<"Nhap so nguyen b: "<<endl;cin>>b;
	cout<<"Nhap so nguyen c: "<<endl;cin>>c;
	cout<<"Nghiem cua phuong trinh trung phuong la: "<<endl;
	float x1= int(giaiptbac2_1(a,b,c));
	float x2= int(giaiptbac2_2(a,b,c));
	cout<<"t1= "<<sqrt(x1)<<endl;
	cout<<"t2= "<<-sqrt(x1)<<endl;
	cout<<"t3= "<<sqrt(x2)<<endl;
	cout<<"t4= "<<-sqrt(x2)<<endl;
	return 0;
}
