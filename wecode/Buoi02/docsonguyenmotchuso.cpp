//doc so nguyen khong am co mot chu so
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	do
	{ cin>>a;
	}while(a<0||a>=10);
	switch(a)
	{
		case 0: cout<<"khong";break;
		case 1: cout<<"mootj";break;
		case 2: cout<<"hai";break;
		case 3: cout<<"ba";break;
		case 4: cout<<"bon";break;
		case 5: cout<<"nam";break;
		case 6: cout<<"sau";break;
		case 7: cout<<"bay";break;
		case 8: cout<<"tam";break;
		case 9: cout<<"chin";break;
		
	}
	return 0;
}
