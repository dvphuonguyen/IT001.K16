#include <iostream>

using namespace std;

int main()
{
    int(a);
    cout<<"Nhap chieu cao:"<<endl;
    cin>>a;
    // DINH NAM BEN TRAI O TREN
    for(int i=0;i<a;i++)
    {
        for(int k=0;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    // DINH NAM BEN PHAI O DUOI THI J>=I
    //DINH NAM BEN TRAI O DUOI THI I CHAYJ TU A-1 DEN 0 VA J<=I
    //DINH NAM BEN PHAI O TREN THI I CHAY TU A-1 DEN 0 VA J>=I
    return 0;
}
