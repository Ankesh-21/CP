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
    int n,x,y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    ll dia = 0LL;
    ll ori = 0LL;
    for (int i =0;i < n;i++){
    	if (s[i] == '4'){
    		ori ++;
    	}
    	else{
    		ori++;
    		dia++;
    	}
    }
    if (ori >= max(abs(x),abs(y)) && dia >= min(abs(x),abs(y))){
    	cout << "Yes" << endl;
    	return;
    }
    cout << "No" << endl;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int tc = 1;
    cin >> tc;
    while(tc--) solve();
}