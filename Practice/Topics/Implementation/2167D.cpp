#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<bool>primes;
vector<int>nums;
void sieve(){
    int n = 1e6;
    primes.resize(n+1,true);
    primes[0] = primes[1] = false;
    for(int i = 2;i*i <= n;i++){
        if (primes[i]){
            for (int j = i * i;j <= n;j += i){
                primes[j] = false;
            }
        }
    }
    for(int i =2;i <=n;i++){
        if (primes[i]){
            nums.push_back(i);
        }
    }
}
void solve(){
    int n;
    cin >> n;
    vector<ll>a(n,0);
    for(int i =0;i < n;i++){
        cin >> a[i];
    }
    for (int el:nums){
        for (ll num:a){
            if ((num % el) != 0){
                cout << el <<"\n";
                return;
            }
        }
    }
    cout << -1 << endl;
}
int main(){
    int tc = 1;
    cin >> tc;
    sieve();
    while (tc--){
        solve();
    }
}