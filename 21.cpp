#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double s, area;
    s = (a + b + c) / 2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    cout << area;

    return 0;
}
