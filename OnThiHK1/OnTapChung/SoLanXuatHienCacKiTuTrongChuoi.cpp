#include <iostream>
using namespace std;
int DemGiongNhau(char a[],int n, char k)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==k) s++;
	}
	return s;
}
void TanSuat(char a[], int n)
{
	for(int i=0;i<n;i++)
	{
		int j;
		for(j=0;j<i;j++)
		{ 
			if(a[i]==a[j]) break;
		}
		if(i==j) cout<<a[i]<<" : "<<DemGiongNhau(a,n,a[i])<<endl;
	}	
}
int Dem(char a[])
{
	int s=0;
	int i=0;
	while(a[i]!='\0') 
	{
		s++;
		i++;
	}
	return s;
}
int main()
{
	char a[10000];
	cin.getline(a,1000);
	int n=Dem(a);
	TanSuat(a,n);
	return 0;
}
