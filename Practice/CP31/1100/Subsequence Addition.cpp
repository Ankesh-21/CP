#include<bits/stdc++.h>
using namespace std;
#define long long ll

void solve(){
    int n;
    cin>>n;
    vector<int>a(n,0);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int>mp;
    mp[1] = 1;
    mp[0] = 1;
    sort(a.begin(),a.end());
    if (a[0] != 1){
        cout<<"NO"<<endl;
        return;
    }
    for (int i = 1;i<n;i++){
        bool found = false;
        for (int j = 0;j<=a[i]/2;j++){
            int fst = j;
            int scd = a[i] - j;
            if (fst == scd && mp[fst] >= 2){
                found = true;
                break;
            }
            else if (fst != scd && mp[fst] != 0 && mp[scd] != 0){
                found = true;
                break;
            }
        }
        if (! found){
            cout<<"NO"<<endl;
            return;
        }
        mp[a[i]] += 1;

    }
    cout<<"YES"<<endl;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    //remove this piece of code when this has to be submitted in kickstart, coding ninjas
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    int tc = 1;
    cin>>tc;
    while(tc--){
        solve();
    }
}