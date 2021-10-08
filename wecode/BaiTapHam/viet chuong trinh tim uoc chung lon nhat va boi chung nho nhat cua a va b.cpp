// viet chuong trinh tim uoc chung lon nhat va boi chung nho nhat cua a va b
#include<bits/stdc++.h>
using namespace std;
int ucln(int m, int n, int &u)
{ 
	if (m<0||n<0) u= m + n;
	while( m!=n)
	{
	if(m>n) m=m-n;
	else n=n-m;
	}
	if(m==n) u=n;
	return u;
}
int bcnn(int m, int n, int u)
{ 
	return (m*n)/u;
}
int main()
{ 
	int m,n,u;
	cout<<"Nhap so nguyen duong thu nhat: "<<endl; cin>>m;
	cout<<"Nhap so nguyen duong thu hai: "<<endl; cin>>n;
	cout<<"Uoc chung lon nhat la: "<<int(ucln(m,n,u))<<endl;
	cout<<"Boi chung nho nhat la: "<<int (bcnn(m,n,u))<<endl;
	return 0;

}
