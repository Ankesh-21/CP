#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin >> a >> b;
    int num = 0;
    int ops = 0;
    vector<int>nums;
    for (int i = 0;i < 32;i++){
        int aBit = ((a >> i) & 1);
        int bBit = ((b >> i) & 1);
        if (aBit != bBit){
            num = (1 << i);
            if (num > a){
                cout << -1 << endl;
                return;
            }
            a = (a ^ num);
            nums.push_back(num);
            ops += 1;
        }
    }
    if (a != b){
        cout << -1 << endl;
        return;
    }
    cout << ops << endl;
    for(int i =0;i < nums.size();i++){
        cout << nums[i] << " ";
    }
    cout << "\n";
}

int main(){
    int tc = 1;
    cin >> tc;
    while (tc --)solve();
}