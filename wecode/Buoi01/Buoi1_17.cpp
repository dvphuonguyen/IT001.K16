#include <bits/stdc++.h>

using namespace std;

int main(){
    float a,b,c;
    float d;
    cin >> a >> b >> c;
    d = b*b - 4 * a * c;
    if (d < 0)
    {
        cout << "PTVN";
    }
    else if (d == 0)
    {
        cout << "PT co nghiem kep: x1 = x2 = " << (float)(-b/(2*a));
    }
    else if (d > 0)
    {
        cout << "PT co hai nghiem phan biet:" << endl;
        cout << "x1 = " << (float)(-b+sqrt(d))/(2*a) << endl;
        cout << "x2 = " << (float)(-b-sqrt(d))/(2*a) << endl;
    }
    return 0;
}
