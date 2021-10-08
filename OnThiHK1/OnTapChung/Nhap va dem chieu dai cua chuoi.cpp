//dem do tu trong chuoi ki tu
#include <bits/stdc++.h>
using namespace std;
int Dem(char a[])
{
	int s=0;
	while(a[s]!='\0') s++;
	return s;
}
int main()
{
	char a[200];
	cout<<"Nhap chuoi ki tu: ";cin.getline(a,100);
	int s=0;
	for(int i=0;i<Dem(a); i++)
	{
		if(a[i-1]==' '&&a[i]!= ' ') s++;
	}
	if(a[0]!=' ')s++;
	cout<<"So tu trong chuoi ki tu la: "<<s;
	return 0;
}
