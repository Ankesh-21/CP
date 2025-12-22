#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Observation
/*
{

}
*/
void solve(){
    // Write your Code
    int n;
    cin >> n;
    vector<ll>nums(n);
    ll evenSum = 0LL;
    vector<ll>odds;
    for(int i =0;i < n;i++){
        cin >> nums[i];
        if (nums[i] % 2 == 0){
            evenSum += nums[i];
        }
        else{
            odds.push_back(nums[i]);
        }
    }

    if (odds.size() == 0) {
        cout << 0 << endl;
        return;
    }
    ll ans = 0LL;
    ans += evenSum;
    sort(odds.begin(),odds.end(),greater<ll>());
    // ans += odds[0];
    ll oddSum = 0;
    int ind = (odds.size() + 2 - 1) / 2;
    for (int i =0;i < ind;i++){
        oddSum += odds[i];
    }
    cout << ans + oddSum << endl;
}

int main(){
    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}