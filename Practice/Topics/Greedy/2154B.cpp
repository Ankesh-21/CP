#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Observation
/*
{
 1. if i odd next element op1 and curr op2 first do op1 then 2 as we nedd to minimize it
 2. if i even next el op2 and curr op1 first do op1 then op2 
}
*/
void solve(){
    // Write your Code
    int n;
    cin >> n;
    vector<int>a(n+1);
    vector<int>ps(n+1,0);
    for(int i =1;i <= n;i++){
        cin >> a[i];
        ps[i] = max(ps[i-1],a[i]);
    }
    int maxTill = 0;
    int op2 = 0;
    for(int i =1;i < n;i++){
        if (i % 2 && (a[i] >= a[i+1])){
            a[i+1] = ps[i+1];
            if (a[i] >= a[i+1]){
                int prev = a[i];
                a[i] = a[i+1] - 1;
                op2 += (prev - a[i]);
            }
        }
        else if ((i%2 == 0) && (a[i] <= a[i+1])){
            a[i] = ps[i];
            if (a[i] <= a[i+1]){
                op2 += (a[i+1] - a[i] + 1);
                a[i+1] = a[i] -1;
            }
        }
    }
    // cout << "ans: ";
    cout << op2 << endl;

}

int main(){
    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}