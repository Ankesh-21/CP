#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i =0;i < n;i++){
        cin >> nums[i];
    }
    vector<int>setbits(30,0);
    for(int i =0;i < n;i++){
        for (int j = 0;j < 30;j++){
            setbits[j] += ((nums[i] >> j) & 1);
        }
    }
    int maxi = 0;
    for (int i = 0;i < n;i++){
        int sum = 0;
        for(int j = 0;j < 30;j++){
            if ((nums[i] >> j) & 1){
                sum += (n - setbits[j]) * (1 << j);
            }
            else{
                sum += (setbits[j] * (1 << j));
            }
        }
        maxi = max(maxi,sum);
    }
    cout << maxi << endl;
}
signed main(){
    int tc = 1;
    cin >> tc;
    while (tc--){
        solve();
    }
}