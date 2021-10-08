#include <iostream>

using namespace std;

int main()
{
    float a,b;
    int s=0;
    int j;

    cout<<"Nhap so thu nhat:"<<endl;
    cin>>a;
    cout<<"Nhap so thu hai: "<<endl;
    cin>>b;
    if(a<b)
    {
        a<=j<=b;
        for(int i=2; a<=i<=b;i++)
        {
            if(j%i==0)
            {
                s=s+1;
            }
        }
    }
    else
    {
        b<=j<=a;
        for(int i=2; b<=i<=a;i++)
        {
            if (j%i==0)
            {
                s=s+1;
            }
        }

    }
    if(s==1)
    {
        cout<<"So nguyen to"<<" "<<j<<endl;

    }
    else
    {
        cout<<"Khong co so nguyen to";
    }



    return 0;
}
