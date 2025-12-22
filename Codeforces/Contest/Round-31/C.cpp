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
    int n,k;
    cin >> n >> k;
    vector<int>a(k,0);
    if (k % 2 == 0){
        for(int i = 1;i < k;i++){
            a[i] = n;
        }
    }
    else{
        for(int i =0;i < k;i++){
            a[i] = n;
        }
    }
    for(int el:a){
        cout << el << " ";
    }
    cout << "\n";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}