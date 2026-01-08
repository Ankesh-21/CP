#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int>a(n,0),c(n,0);
    for(int i =0;i < n;i++){
        cin >> a[i];
    }
    for(int i =0;i < n;i++){
        cin >> c[i];
    }
    int ans = 0;
    int mini = INT_MAX;
    for(int i = 0;i < n;i++){
        mini = min(mini,c[i]);
        ans += mini * a[i];
    }
    
    cout << ans << endl;
}

int main() {
	// your code goes here
    int tc = 1;
    cin >> tc;
    while (tc --) solve();
}