#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    string w;
    for(int i = 0; i < n; i++){
        cin >> w;
        int len = w.length();
        
        if(len <= 10) {
            cout << w << endl;
        } else {
            cout << w[0] << len - 2 << w[len - 1] << endl;
        }
    }
    
    return 0;
}