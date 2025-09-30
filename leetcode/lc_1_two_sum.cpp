#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    int target;
    cin >> target;
    for(int i=0; i<n-1; i++){
        if(nums[i]+nums[i+1]== target){
            cout << i << " " << i+1;
            break;
        }
    }
}