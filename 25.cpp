#include<iostream>

using namespace std;

int main(){
    int i, j, a[5];
    for(i = 1; i <= 5;i++)
    {
        cin >> a[i];
    }
    for(i = 1;i <= 5;i++){
        int b =0;
        int s =0;
        for(j = 1;j <= 5;j++){
            if(a[j] > a[i]) s++;
            else if(a[i] > a[j]) b++;
        }
        if(b == 2 &&  s == 2){
            cout << a[i];
            return 0;
        }
    }
}
