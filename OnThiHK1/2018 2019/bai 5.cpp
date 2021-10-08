#include <iostream>
using namespace std;
int Dem(char a[])
{
	int i=0;
	// i chay tu 0 den so luong ki tu
	int s=0;
	// so luong ki tu
	while(a[i]!='\0')
	{
		i++;
		s++;
	}
	return s;
}
int DemSoKyTuNguyenAm(char a[])
{
	int n=Dem(a);
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='A'||a[i]=='E'||a[i]=='O'||a[i]=='I'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='u'||a[i]=='i') s++;
	}
	return s;
}
int main()
{
	char a[256];
	cin.getline(a,256);
	cout<<DemSoKyTuNguyenAm(a)<<endl;
	return 0;

}
