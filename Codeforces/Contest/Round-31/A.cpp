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
    int l,a,b;
    cin >> l >> a >> b;
    int ops = 0;
    int maxi = a;
    for(int i = 1;i <= 5000;i++){
        ll score = (a + (i * b)) % l;
        if (maxi < score){
            maxi = score;
            ops = i;
        }
    }
    cout << maxi << endl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}