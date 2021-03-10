#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    double d;
    d = (a-x)*(a-x) + (b-y)*(b-y);
    cout <<"khaong cach giua hai diem = " << sqrt(d);

    return 0;
}
