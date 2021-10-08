#include <iostream>
#include <string>
using namespace std;
int dem(char a[])
{
	int s=0;
	int i=0;
	while(a[i]=='\0') 
	{
		s++;
		i++;	
	}
}
int main()
{
	char a[100];
	// nhap
	cout<<"Nhap chuoi ki tu: ";
	cin.getline(a,100);
	// so tu trong mot chuoi
	int n=dem(a);
	cout<<"Do dai chuoi la: "<<n<<endl;
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=' '&&a[i-1]==' ') s++;
	}
	if(a[0]!=' ') s++;
	cout<<" Chuoi "<<a<<" co "<<s<<" tu.";
	return 0;
}
