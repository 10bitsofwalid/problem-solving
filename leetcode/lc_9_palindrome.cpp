#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    if(x<0){
        cout << boolalpha << false;
        return 0;
    }
    int real = x;
    int rev = 0;

    while(x>0){
        rev = rev * 10 + (x % 10);
        x/= 10;
    }
    cout << boolalpha << (real == rev);
    return 0;
}