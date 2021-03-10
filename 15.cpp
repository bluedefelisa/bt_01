#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string f;
    string s0;
    string s1;
    cin >> s0 >> s1;
    if(n == 0)
    {
        cout << s0;
    }
    else if(n == 1)
    {
        cout << s1;
    }
    else
    {
        for(int i =2; i<=n;i++)
        {
            f = s1 + s0;
            s0 =s1;
            s1 =f;
        }
        cout << f;
    }
}
