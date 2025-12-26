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
    string s;
    cin >> s;
    
    string ss = "";
    int start = 0;
    for(int i =0;i < n;i++){
        if (s[i] != s[start] && s[start] != '1'){
            ss.push_back('0');
            start = i;
        }

        else if (s[i] != s[start]){
            string temp(i - start,'1');
            ss += temp;
            start = i;
        }
    }
    if (start < n){
        if (s[start] == '0'){
            ss.push_back('0');
        }
        else{
            string temp(n - start,'1');
            ss += temp;
        }
    }
    int ones = count(ss.begin(),ss.end(),'1');
    // cout << ones << "\n";
    if (ones > (ss.size() - ones)){
        cout << "Yes\n";
        return;
    }
    cout << "No" << endl;
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