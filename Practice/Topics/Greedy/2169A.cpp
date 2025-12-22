#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,a;
    cin >> n >> a;
    vector<int>nums(n);
    int b = a;
    int lessThan = 0;
    int equals = 0;
    for(int i =0;i < n;i++){
        cin >> nums[i];
    }
    /*
    for(int i =0;i < n;i++){
        if (nums[i] < a){
            lessThan ++;
        }
        else if (nums[i] == a){
            equals ++;
        }
    }
    if (equals >= lessThan){
        if (lessThan >= (n - lessThan - equals)){
            b = a - 1;
        }
        else
            b = a + 1;
    }
    else if (lessThan >= (n - lessThan)){
        b = a - 1;
    }
    else{
        b = a + 1;
    }
    cout << b << endl;
    */
    int num1 = a - 1;
    int num2 = a + 1;
    int less = 0;
    int more = 0;
    for (int i =0;i < n;i++){
        if (nums[i] < a){
            less ++;
        }
        if (nums[i] > a){
            more ++;
        }
    }
    if (less > more) cout << num1 << endl;
    else cout << num2 << endl;
}

int main(){
    int tc = 1;
    cin >> tc;
    while(tc --) solve();
}