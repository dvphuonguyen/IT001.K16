#include <iostream>
using namespace std;
typedef int* IntArrayPtr;
int main()
{
int d1, d2;
cout<<"Enter the row and column dimensions of the array: "<<endl;
cin>>d1>>d2;
// 2 3
IntArrayPtr *m= new IntArrayPtr[d1];
for(int i=0;i<d1;i++)
m[i]=new int [d2];
cout<<"Enter "<<d1<<" rows of "<<d2<<" integers each : ";
// enter 2 rows of 3 integers each
cout<<endl;
for(int i=0;i<d1;i++)
{
	for(int j=0;j<d2;j++)
	cin>>m[i][j];
	//0 2 4 1 3 5
}	
cout<<"Echoing the two dimensional array: ";
for(int i=0;i<d1;i++)
{
	for(int j=0;j<d2;j++)
	{
		cout<<m[i][j]<<" ";
		//0 2 4 1 3 5
	}
}
return 0;
}
