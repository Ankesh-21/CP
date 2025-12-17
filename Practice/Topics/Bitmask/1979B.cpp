#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,y ;
    cin >> x >> y;
    int ans = 1;
    for (int i = 0;i < 30;i++){
        int xBit = (x >> i) & 1;
        int yBit = (y >> i) & 1;
        if (xBit != yBit){
           ans = i;
            break;
        }
    }
    cout << (1 << ans) << endl;
}
int main(){
    int tc = 1;
    cin >> tc;
    while (tc--)solve();
}