#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b ,c;
    cin >> a >> b >> c;
    bool z = true;
    if((a<b && b<c ) || (a>b && b>c))
    {
        z = true;
    }
    else
    {
        z = false;

    }
   /* if(z = true)
    {
        cout <<"True";
    }
    else
    {
        cout <<"False";
    }*/
    cout << z;

    return 0;
}
