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
    vector<int>a(n,0);
    vector<int>b(n,0);
    // unordered_map<int,int>mp;
    int maxi = 1;
    for (int i =0;i < n;i++){
        cin >> a[i];
    }
    for(int i =0;i < n;i++){
        cin >> b[i];
    }
    unordered_map<int,int>mpa;
    unordered_map<int,int>mpb;
    int j = 0;
    for (int i = 0;i < n;i++){
        if (a[i] != a[j]){
            mpa[a[j]] = max(mpa[a[j]],i - j);
            j = i;
        }
    }
    mpa[a[j]] = max(mpa[a[j]],n - j);
    j = 0;
    for (int i = 0;i < n;i++){
        if (b[i] != b[j]){
            mpb[b[j]] = max(mpb[b[j]],i - j);
            j = i;
        }
    }
    mpb[b[j]] = max(mpb[b[j]],n - j);
    for (auto p:mpa){
        int f = p.first;
        int s = p.second;
        if (mpb[f] > 0){
            maxi = max(maxi,mpb[f] + s);
        }
        else{
            maxi = max(maxi,s);
        }
    }
    for (auto p:mpb){
        maxi = max(maxi,p.second);
    }
    cout << maxi << endl;
}

int main(){
    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}