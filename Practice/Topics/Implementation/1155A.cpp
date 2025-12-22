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
    // int firstLarge = -1;
    int largeInd = -1;
    for (int i = 0;i < n;i++){
        if (largeInd == -1){
            largeInd = i;
        }
        else{
            if (s[largeInd] > s[i]){
                cout << "Yes" << endl;
                cout << largeInd + 1<< " " << i + 1 << endl;
                return;
            }
            else{
                largeInd = i;
            }
        }
    }
    cout << "No" << endl;
}

int main(){
    int tc = 1;
    // cin >> tc;
    while(tc--) solve();
}