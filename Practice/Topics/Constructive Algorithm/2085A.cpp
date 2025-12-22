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
    string s;
    cin >> s;
    set<char>set(s.begin(),s.end());
    if (set.size() == 1){
        cout << "No" <<endl;
        return;
    }

    if (s < string(s.rbegin(),s.rend())){
        cout << "Yes" << endl;
        return;
    }

    if (k > 0){
        cout << "Yes" <<endl;
        return;
    }
    cout << "No" <<endl;
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