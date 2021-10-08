// viet chuong trinh xac dinh tinh chat cua mot tam giac( thuong, vuong, can , deu. Dua tren toa do cua 3 dinh,
//trong do xay dung ham xac dinh khoang cach giua hai diem tren mat phang
#include<bits/stdc++.h>
using namespace std;
struct td
{
	int a,b;
};
void nhaptoado(td &c)
{
	cout<<"Nhap tung do: "<<endl;cin>>c.a;
	cout<<"Nhap hoanh do: "<<endl;cin>>c.b;
	
}

double khoangcach(td c1, td c2)
{
	double d;
	d=sqrt((double(c1.a-c2.a)*(c1.a-c2.a))+((c1.b-c2.b)*(c1.b-c2.b)));
	return d;
}
int main()
{
	int a,b,c;
	cout<<"Nhap canh thu nhat :  "<<endl;cin>>a;
	cout<<"Nhap canh thu hai :  "<<endl;cin>>b;
	cout<<"Nhap canh thu ba :  "<<endl;cin>>c;
	if(a>b+c||b>c+a||c>a+b) cout<<"Khong phai la tam giac";
	else
	{
		if(a==b&&b==c&&c==a) cout<<"Tam giac deu";
		else if(a==b||a==c||c==a) cout<<"Tam giac can";
		else if(a*a==b*b+c*c||c*c==a*a+b*b||b*b==a*a+c*c) cout<<"Tam giac vuong";
		else cout<<"Tam giac thuong";
		
	}
	cout<<endl;
	td toado1; td toado2;
	double d;
	cout<<"Xet toa do diem: "<<endl;
	cout<<"Toa do diem A: "<<endl;
	nhaptoado(toado1);
	cout<<"Toa do diem B: "<<endl;
	nhaptoado(toado2);
	d= khoangcach(toado1,toado2);
	cout<<"Khoang cach giua hai diem A va B la: "<<d;
	return 0;
	
}
