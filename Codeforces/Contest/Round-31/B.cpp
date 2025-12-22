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
    vector<string>ss(n);
     priority_queue<string,vector<string>,greater<string>>pq;
    for(int i =0;i < n;i++){
        cin >> ss[i];
        if (i != 0)pq.push(ss[i]);
    }

    string s = ss[0];
    string first = s;
    for(int i =1;i < n;i++){
        string tp = pq.top();
        if (tp == ss[i]){
            string res1 = tp + s;
            string res2 = s + tp;
            s = min(res1,res2);
            pq.pop();
        }
        else{
            string res1 = ss[i] + s;
            string res2 = s + ss[i];
            s = min(res1,res2);
        }
    }
    cout << s << endl;

}

int main(){
    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}