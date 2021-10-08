#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	int n=size_tstrlen(a);
	int s=0;
	if(a[0]!=' ') s++;
	for(int i=0;i<n;i++)
	{
		if(a[i-1]==' '&&a[i]!=' ') s++;
	}
	cout<<s<<endl;
	return 0;
}
