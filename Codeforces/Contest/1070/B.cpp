#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >>s;
    // maximum count of zeros continous
    int j = 0;
    int maxi = INT_MIN;
    for(int i =0; i< n;i++){
        if (s[i] == '1'){
            while (j < i && s[j] == '1'){
                j += 1;
            }
            maxi = max(maxi,(i - j));
            j = i;
        }
    }
    
    if (j < (n - 1)){
        // cout << j << endl;
        while(j < n && s[j] == '1'){
            j += 1;
        }
        int k = 0;
        for (k =0;k < n;k++){
            if (s[k] == '1'){
                break;
            }
        }
        maxi = max(maxi,(n + k) - j);
    }
    cout << maxi << endl;
}
int main(){
    int tc = 1;
    cin >> tc;
    while (tc--){
        solve();
    }
}