#include <iostream>
using namespace std;
bool MangDoiXung(int a[][100], int r, int c)
{
	for(int i=9;i<r;i++)
	{
		for(int j=0;j<c/2;j++)
		{
			if(a[i][j]!=a[i][c-j-1]) 
			{
				return 0;
			}
		}
	}
	return 1;
}
int main()
{
	int a[100][100], r,c;
	cout<<"Nhap so cot: ";cin>>c;
	cout<<"Nhap so dong : ";cin>>r;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	if(MangDoiXung(a,r,c)==1) cout<<"True";
	else cout<<"False";
	return 0;
}
