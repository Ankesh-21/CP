#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int>qs(q);
    vector<pair<int,int>>ps(n);
    for(int i =0;i < q;i++){
        cin >> qs[i];
    }
    for (int i =0;i < n;i++){
        if (i == 0){
            if (s[i] == 'A'){
                ps[i].first += 1;
            }
            else{
                ps[i].second += 1;
            }
        }
        else{
            if (s[i] == 'A'){
                ps[i].first = ps[i-1].first + 1;
                ps[i].second = ps[i-1].second;
            }
            else{
                ps[i].second = ps[i-1].second + 1;
                ps[i].first = ps[i-1].first;
            }
        }
    }
    /*
    for (int i =0;i < n;i++){
        cout << ps[i].first << " " << ps[i].second << endl;
    }
    */
    for (int q:qs){
        int cnt = -1;
        int ans = 0;
        while (true){
            int l = 0;
            int r = n - 1;
            while (l < r){
                int mid = l + (r - l) / 2;
                int bs = (1 << ps[mid].second);
                int as = ps[mid].first;
                int num = floor(q / bs) - as;
                if (num <= 0){
                    r = mid - 1;
                    cnt = mid + 1;
                }
                else{
                    l = mid + 1;
                }
            }
            if (cnt == -1){
                int bs = (1 << ps[n-1].second);
                int as = ps[n-1].first;
                int num = floor(q / bs) - as;
                q = num;
                ans += n;
            }
            else{
                ans += cnt;
                cout << ans << endl;
                break;
            }
        }
    }
}

int main(){
    int tc = 1;
    cin >> tc;
    while (tc--)solve();
}