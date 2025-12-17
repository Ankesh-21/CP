#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>b(n+1);
    for(int i =1;i <= n;i++){
        cin >> b[i];
    }
    vector<int>ans;
    int el = 1;
    for(int i =1;i <= n;i++){
        int required = (i * (i +1)) / 2;
        if (b[i] == required){
            ans.push_back(el);
            el ++;
        }
        else {
            int diff = required - b[i];
            if (diff == 0 || diff > 2){
                ans.push_back(el);
                el ++;
            }
            else if (diff == 1){
                ans.push_back(ans.back() - 1);
            }
            else{
                ans.push_back(ans.back());
            }
        }
    }
    for(int num:ans){
        cout << num << " ";
    }
    cout << endl;
}

int main(){
    int tc = 1;
    cin >> tc;
    while(tc--)solve();
}